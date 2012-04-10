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

#include "proc.h"
#include <stdlib.h>

long proc_mem_total(proc_mem_unit unit)
{

    long kb = atol(proc_search_keyword(PROC_MEMF, "MemTotal"));

    if(unit == PROC_KB) return kb;

    else if(unit == PROC_B) return kb * 1000;

    else if(unit == PROC_MB) return kb / 1000;

    else if(unit == PROC_GB) return kb / 1000000;

    else return -1;
}

long proc_mem_used(proc_mem_unit unit)
{

    long kb = proc_mem_total(PROC_KB) - proc_mem_free(PROC_KB);

    if(unit == PROC_KB) return kb;

    else if(unit == PROC_B) return kb * 1000;

    else if(unit == PROC_MB) return kb / 1000;

    else if(unit == PROC_GB) return kb / 1000000;

    else return -1;

}

long proc_mem_free(proc_mem_unit unit)
{

    long kb = atol(proc_search_keyword(PROC_MEMF, "MemFree"));

    if(unit == PROC_KB) return kb;

    else if(unit == PROC_B) return kb * 1000;

    else if(unit == PROC_MB) return kb / 1000;

    else if(unit == PROC_GB) return kb / 1000000;

    else return -1;
}

long proc_swap_total(proc_mem_unit unit)
{

    long kb = atol(proc_search_keyword(PROC_MEMF, "SwapTotal"));

    if(unit == PROC_KB) return kb;

    else if(unit == PROC_B) return kb * 1000;

    else if(unit == PROC_MB) return kb / 1000;

    else if(unit == PROC_GB) return kb / 1000000;

    else return -1;
}

long proc_swap_used(proc_mem_unit unit)
{

    long kb = proc_swap_total(PROC_KB) - proc_swap_free(PROC_KB);

    if(unit == PROC_KB) return kb;

    else if(unit == PROC_B) return kb * 1000;

    else if(unit == PROC_MB) return kb / 1000;

    else if(unit == PROC_GB) return kb / 1000000;

    else return -1;

}

long proc_swap_free(proc_mem_unit unit)
{

    long kb = atol(proc_search_keyword(PROC_MEMF, "SwapFree"));

    if(unit == PROC_KB) return kb;

    else if(unit == PROC_B) return kb * 1000;

    else if(unit == PROC_MB) return kb / 1000;

    else if(unit == PROC_GB) return kb / 1000000;

    else return -1;
}
