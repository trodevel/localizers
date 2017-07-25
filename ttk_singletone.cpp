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

#include "ttk_singletone.h"     // self

namespace localizers
{

templtextkeeper::TemplTextKeeper * TtkSingletone::ttk_  = nullptr;

} // namespace localizers
