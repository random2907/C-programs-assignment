#include <stdio.h>
#include <string.h>
 
int main()
{
    // initializing string
    char str[] = "GeeksforGeeks";
 
    // character to be searched
    char chr = 'k';
 
    // Storing pointer returned by
    char *ptr = strrchr(str, chr);
    printf("%d",ptr-str); 
    return 0;
}
