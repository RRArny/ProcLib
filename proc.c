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
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* proc_search_keyword(char* file, char* keyword)
{
    FILE* fp;
    char buffer[BUFSIZE], scan_buf[BUFSIZE];
    char* read_ind;
    char* buffptr;
    char* result = malloc(BUFSIZE);
    char blanco_dummy[BUFSIZE];

    if((fp = fopen(file, "r")) == NULL)
    {
        perror("fopen()");
        exit(EXIT_FAILURE);
    }

    do
    {
        read_ind = fgets (buffer, BUFSIZE, fp);
        buffptr = strstr(buffer, keyword);
    }
    while(buffptr == NULL && read_ind != NULL);

    fclose (fp);

    if (read_ind == NULL && buffptr == NULL)
        return "Nothing";

    strncpy(scan_buf, keyword, 996);

    strcat(scan_buf, ": %[a-zA-Z0-9 \t()]s");

    sscanf (buffptr, scan_buf, result);

    return result;
}

int proc_num_of_occ(char* file, char* keyword)
{
    FILE* fp;
    char buffer[1024];
    char* buffptr = (char*) buffer;
    size_t blocks_read;
    //char *match;
    unsigned int occ = 0;

    if((fp = fopen(file, "r")) == NULL)
    {
        perror("fopen()");
        exit(EXIT_FAILURE);
    }

    blocks_read = fread (buffer, sizeof (buffer), 1, fp);

    do
    {
        buffptr = (char*) buffer;
        buffptr = strstr(buffptr, keyword);

        while(buffptr != NULL)
        {
            buffptr++;
            occ++;
            buffptr = strstr(buffptr, keyword);
        }
        blocks_read = fread (buffer, sizeof (buffer), 1, fp);
    }
    while(blocks_read > 0);

    fclose(fp);

    return occ;
}
