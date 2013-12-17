#include <stdio.h>

int main()
{
    int ascii[100], i;
    for(i=0; i<100; i++)
        ascii[i] = 92;
    
    while(1)
    {
        // input
        printf("변환될 수와 진법을 입력하시오: ");
        int numbers, system;
        scanf("%d %d", &numbers, &system);
        // test & save decimal event
        if( (system < 2) || (system > 36) )
            return 0;
        else
        {
            i = 0;
            int quotient, reminder;
            quotient = numbers/system;
            reminder = numbers%system;
            ascii[i] = reminder;
            i++;
            while (numbers >= quotient)
            {
                numbers = quotient;
                quotient = numbers/system;
                reminder = numbers%system;
                ascii[i] = reminder;
                i++;
                if(reminder == 0)
                    break;
            }
        }
        
        // print out
        int index = -1;
        for(i=99; i>=0; i--)
            if(ascii[i] != 92)
            {
                index = i;
                index --;
                break;
            }
        for(; index>=0; index--)
        {
            if( ascii[index] >= 0 && ascii[index] <= 9)
                printf("%d",ascii[index]);
            else
                printf("%c",ascii[index]+55);
        }
        printf("\n");
    }
    return 0;
}