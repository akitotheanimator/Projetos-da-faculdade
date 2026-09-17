#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>

struct SEGREDO{
    char *msg;
    int c;
};

char cycling[] = {'-', '*', 'o'};
int selected = 0;
int main()
{
    struct SEGREDO *SEC;
    int MSGC = 8;
    SEC = malloc(MSGC * sizeof(struct SEGREDO));

    SEC[0].msg = "Você leu, seu cu é meu";
    SEC[0].c = strlen(SEC[0].msg);

    SEC[1].msg = "Me ajuda";
    SEC[1].c = strlen(SEC[1].msg);

    SEC[2].msg = "Seja criativo";
    SEC[2].c = strlen(SEC[2].msg);

    SEC[3].msg = "Que";
    SEC[3].c = strlen(SEC[3].msg);

    SEC[4].msg = "Ahn";
    SEC[4].c = strlen(SEC[4].msg);

    SEC[5].msg = "Natal";
    SEC[5].c = strlen(SEC[5].msg);

    SEC[6].msg = "Matagal";
    SEC[6].c = strlen(SEC[6].msg);

    SEC[7].msg = "Carlinhosssss";
    SEC[7].c = strlen(SEC[7].msg);

    int *array;
    int n = 50;
    int intensity = 1;
    int dur = 10000;
    int height = 10;
    int SEL_MES = 0;
    array = malloc(n * sizeof(int));
    for (int i = 0; i < n;i++)
    {
        array[i] = i*intensity;
    }
    
    
    
    while(n > 0)
    {
        int written = 0;
        srand(time(NULL));
        written = rand() % 2 - 1;
        for(int i = 0; i < n; i++)
        {

            
            int add = 0;
            add = i % 2;
            int count = array[i] + height + add;
            
            
            
            for (int h = 0; h < count; h++)
            {
                srand(time(NULL)+h);
                int inPos = rand() % (h+1);
                if (SEC[SEL_MES].c < count - h && h == inPos && written == 0)
                {
                    printf("%s", SEC[SEL_MES].msg);
                    h += SEC[SEL_MES].c - 3;
                    SEL_MES = rand() % MSGC;
                    written = 1;
                }
                else
                    printf("%c", cycling[selected]);
            }
            usleep(dur);
            printf("\n");
        }
        for(int i = n-2; i > -1; i--)
        {
            
            int add = 0;
            add = i % 2;
            int count = array[i] + height + add;
            for (int h = 0; h < count; h++)
            {
                srand(time(NULL)+h);
                int inPos = rand() % (h+1);
                if (SEC[SEL_MES].c < count - h && h == inPos && written == 0)
                {
                    printf("%s", SEC[SEL_MES].msg);
                    h += SEC[SEL_MES].c - 3;
                    SEL_MES = rand() % MSGC;
                    written = 1;
                }
                else
                    printf("%c", cycling[selected]);
            }
            usleep(dur);
            printf("\n");
        }
        n-=1;
        array = realloc(array, n * sizeof(int));
    }
    selected += 1;
    if (selected >= (sizeof(cycling) / sizeof(*cycling)))
        selected = 0;
    main();

    
    //printf("Hello World");
    
    
    
    free(array);
    return 0;
    
}
