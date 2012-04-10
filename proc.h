/**
    Copyright ©2012 Robin Arnold

    This file is part of ProcLib.

    ProcLib is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ProcLib is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ProcLib.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef PROCLIB
#define PROCLIB

/*Include the other files*/
#define PROC_BOOL char
#define PROC_TRUE 1
#define PROC_FALSE 0

#include "proc_mem.h"
#include "proc_cpu.h"
#include "proc_kernel.h"
//#include "proc_power.h"
//#include "proc_hdd.h"
//#include "proc_cur.h"
//#include "proc_net.h"

/*Define the location of the /proc/-FS*/
#define PROC_DIR "/proc/"



#define BUFSIZE 1024

extern char* proc_search_keyword(char*, char*);
extern int proc_num_of_occ(char* file, char* keyword);

#endif

