#include <proc.h>
#include <stdio.h>

int main()
{
    printf("%s\n", proc_search_keyword(PROC_CPUF, "processor"));
    return 0;
}
