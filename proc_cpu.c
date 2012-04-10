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

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "proc.h"

char* proc_cpu_vendor()
{
    return proc_search_keyword(PROC_CPUF, "vendor_id");
}

char* proc_cpu_model()
{
    return proc_search_keyword(PROC_CPUF, "model name");
}

int proc_cpu_number()
{
    return proc_num_of_occ(PROC_CPUF, "processor");
}

long proc_cpu_speed(proc_cpu_freq_unit unit)
{
    long mhz = atol(proc_search_keyword(PROC_CPUF, "cpu MHz"));

    if(unit == PROC_MHZ)
    {
        return mhz;
    }
    else if(unit == PROC_GHZ)
    {
        return mhz / 1000;
    }
    else if(unit == PROC_KHZ)
    {
        return mhz * 1000;
    }
    else
    {
        return mhz * 1000000;
    }
}

long proc_cpu_cache(proc_mem_unit);

PROC_BOOL proc_cpu_fpu()
{
    if(strncmp(proc_search_keyword(PROC_CPUF, "fpu"), "Nothing", sizeof("Nothing")) != 0)
    {
        return PROC_TRUE;
    }
    return PROC_FALSE;
}

