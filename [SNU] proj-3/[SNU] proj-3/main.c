
#include <stdio.h>

int main()
{
    FILE *fp = fopen("input.txt", "r");
    int d, i, j, input1[9][9], input2[9][9], output[9][9];
    
    if( fp != NULL)
    {
        // save total array size
        fscanf(fp,"%d",&d);
        // save input1
        for(i=0; i<d; i++)
            for(j=0; j<d; j++)
                fscanf(fp,"%d",&input1[i][j]);
        // save input2
        for(i=0; i<d; i++)
            for(j=0; j<d; j++)
                fscanf(fp,"%d",&input2[i][j]);
        
        
    }
    else
        printf("file open error!");
    
    return 0;
}

