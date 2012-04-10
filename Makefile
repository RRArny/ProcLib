#
#   Copyright ©2012 Robin Arnold
#
#   This file is part of ProcLib.
#
#   ProcLib is free software: you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation, either version 3 of the License, or
#   (at your option) any later version.
#
#   ProcLib is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.
#
#   You should have received a copy of the GNU General Public License
#   along with ProcLib.  If not, see <http://www.gnu.org/licenses/>.
#

shared:
	gcc -fPIC -shared -o bin/shared/libProclib.so proc.c proc_mem.c proc_cpu.c proc_process.c

static:
	gcc -fPIC -static -o bin/static/libProclib.a proc.c proc_mem.c proc_cpu.c proc_process.c

sharedDebug:
	gcc -g -fPIC -shared -o bin/sharedDebug/libProclib.so proc.c proc_mem.c proc_cpu.c proc_process.c

staticDebug:
	gcc -g -fPIC -static -o bin/staticDebug/libProclib.a proc.c proc_mem.c proc_cpu.c proc_process.c

all: shared static sharedDebug staticDebug

children:
	@echo ""
	@echo "Make is powerful, but not THAT powerful!"
	@echo ""
