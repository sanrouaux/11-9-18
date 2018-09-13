#include <stdio.h>
#include <stdlib.h>

int main()
{

    return 0;
}


void insertion(int data[], int len)
{
    int i,j;
    int temp;

    for(i=1; i<len; i++)
    {
        temp = data[i];
        j=i-1;

        while(j>=0 && temp<data[j])
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1]=temp;
    }

    for()

}
