﻿/**
Authors:
Michael Berg <michael.berg@zalf.de>

Maintainers:
Currently maintained by the authors.

This file is part of the util library used by models created at the Institute of
Landscape Systems Analysis at the ZALF.
Copyright (C) 2007-2013, Leibniz Centre for Agricultural Landscape Research (ZALF)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _AGRICULTURAL_HELPER_H
#define	_AGRICULTURAL_HELPER_H

#include <string>
#include <vector>

namespace Tools
{
	//! create stt from stt code
	std::string sttFromCode(int sttCode);

	std::vector<std::string> sttsFromCode(int sttCode);

	//! splits stt code into its parts
	std::vector<int> splitSttCode(int sttCode);

	int sttCodeFromStt(std::string stt);
}

#endif	/* _AGRICULTURAL_HELPER_H */

