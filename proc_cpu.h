#ifndef PROC_CPU

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
#error "Never include this file directly! Use proc.h instead!"
#endif

#include "proc.h"

#define PROC_CPU
#define PROC_CPUF "/proc/cpuinfo"

/*Define Unit types*/
enum proc_cpu_freq_unit_enum {PROC_HZ, PROC_KHZ, PROC_MHZ, PROC_GHZ};
typedef enum proc_cpu_freq_unit_enum proc_cpu_freq_unit;

/*Function prototypes*/
extern char* proc_cpu_vendor();
extern char* proc_cpu_model();
extern int proc_cpu_number();
extern long proc_cpu_speed(proc_cpu_freq_unit);
extern long proc_cpu_cache(proc_mem_unit);
extern PROC_BOOL proc_cpu_fpu();

#endif

