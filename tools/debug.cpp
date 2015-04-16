/**
Authors: 
Xenia Specka <xenia.specka@zalf.de>
Michael Berg <michael.berg@zalf.de>

Maintainers: 
Currently maintained by the authors.

This file is part of the MONICA model. 
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

#include "debug.h"

using namespace Tools;
using namespace std;

bool Tools::activateDebug = false;

ostream& Tools::debug()
{
  static Debug dummy;
  return activateDebug ? cout : dummy;
}

Debug::~Debug()
{
  DebugBuffer* buf = (DebugBuffer*) rdbuf();
  if (buf)
    delete buf;
}
