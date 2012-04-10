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

#ifndef PROC_MEM

#ifndef PROCLIB
#error "Never include this file directly! Use proc.h instead!"
#endif

#define PROC_MEM

#include "proc.h"

#define PROC_MEMF "/proc/meminfo"

/*Define Unit types*/
enum proc_mem_unit_enum {PROC_B, PROC_KB, PROC_MB, PROC_GB};
typedef enum proc_mem_unit_enum proc_mem_unit;

/*Function prototypes*/
extern long proc_mem_total(proc_mem_unit);
extern long proc_mem_used(proc_mem_unit);
extern long proc_mem_free(proc_mem_unit);
extern long proc_swap_total(proc_mem_unit);
extern long proc_swap_used(proc_mem_unit);
extern long proc_swap_free(proc_mem_unit);

#endif
