#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int *array;
    int n = 50;
    int intensity = 1;
    int dur = 10000;
    int height = 10;
    array = malloc(n * sizeof(int));
    for (int i = 0; i < n;i++)
    {
        array[i] = i*intensity;
    }
    
    
    
    while(n > 0)
    {
        for(int i = 0; i < n; i++)
        {
            for (int h = 0; h < array[i] + height; h++)
                printf("-");
            usleep(dur);
            printf("\n");
        }
        for(int i = n-2; i > -1; i--)
        {
            for (int h = 0; h < array[i] + height; h++)
                printf("-");
            usleep(dur);
            printf("\n");
        }
        n-=1;
        array = realloc(array, n * sizeof(int));
    }
    
    main();

    
    //printf("Hello World");
    
    
    
    free(array);
    return 0;
    
}
