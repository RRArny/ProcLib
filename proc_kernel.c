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

char* proc_kernel_type()
{
    char* result = malloc(BUFSIZE);
    FILE* fp;
    fp = fopen("/proc/sys/kernel/ostype", "r"),
    if(fp == NULL)
    {
        return "Nothing";
    }
    if(fgets(result, BUFSIZE, fp) == NULL)
    {
        return "Nothing";
    }
    return result;
}

char* proc_kernel_release()
{
    char* result = malloc(BUFSIZE);
    FILE* fp;
    fp = fopen("/proc/sys/kernel/osrelease", "r"),
    if(fp == NULL)
    {
        return "Nothing";
    }
    if(fgets(result, BUFSIZE, fp) == NULL)
    {
        return "Nothing";
    }
    return result;
}

char* proc_kernel_version()
{
    char* result = malloc(BUFSIZE);
    FILE* fp;
    fp = fopen("/proc/sys/kernel/osversion", "r"),
    if(fp == NULL)
    {
        return "Nothing";
    }
    if(fgets(result, BUFSIZE, fp) == NULL)
    {
        return "Nothing";
    }
    return result;
}
