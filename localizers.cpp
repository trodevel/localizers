/*

Localizers.

Copyright (C) 2017 Sergey Kolevatov

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.

*/

// $Revision: 8373 $ $Date:: 2017-11-15 #$ $Author: serge $

#include "localizers.h"     // self

#include "ttk_singletone.h"         // TtkSingletone

namespace localizers
{

const templtextkeeper::TemplTextKeeper::Templ * get_templ( const std::string & name, lang_tools::lang_e lang )
{
    auto ttk = TtkSingletone::get();

    if( ttk == nullptr )
        return nullptr;

    auto id = ttk->find_template_id_by_name( name );

    if( id == 0 )
        return nullptr;

    return ttk->get_template( id, lang );
}

const std::string * to_salutation_raw( phonebook::gender_e e, lang_tools::lang_e lang )
{
    std::string name;

    if( e == phonebook::gender_e::MALE )
        name = "Salutation_M";
    else if( e == phonebook::gender_e::FEMALE )
        name = "Salutation_F";
    else if( e == phonebook::gender_e::UNDEF )
        name = "Salutation_U";

    auto templ = get_templ( name, lang );

    if( templ == nullptr )
        return nullptr;

    return & templ->get_template();
}

const std::string & to_salutation( phonebook::gender_e e, lang_tools::lang_e lang )
{
    static const std::string def( "?" );

    auto res = to_salutation_raw( e, lang );

    if( res == nullptr )
        return def;

    return * res;
}

const std::string * to_phone_key_raw( const std::string & key, lang_tools::lang_e lang )
{
    std::string name;

    if( key == "HASH" )
        name = "Phonekey_HASH";
    else if( key == "STAR" )
        name = "Phonekey_STAR";

    auto templ = get_templ( name, lang );

    if( templ == nullptr )
        return nullptr;

    return & templ->get_template();
}

} // namespace localizers
