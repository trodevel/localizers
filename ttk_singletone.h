/*

TemplTextKeeper Singletone.

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

// $Revision: 7392 $ $Date:: 2017-07-25 #$ $Author: serge $

#ifndef LOCALIZERS_TTK_SINGLETONE_H
#define LOCALIZERS_TTK_SINGLETONE_H

#include "../templtextkeeper/templtextkeeper.h"     // TemplTextKeeper

namespace localizers
{

class TtkSingletone
{
public:

    static void init( templtextkeeper::TemplTextKeeper * ttk )
    {
        ttk_    = ttk;
    }

    static templtextkeeper::TemplTextKeeper * get()
    {
        return ttk_;
    }

private:
    static templtextkeeper::TemplTextKeeper * ttk_;
};

} // namespace localizers

#endif // LOCALIZERS_TTK_SINGLETONE_H
