#include<stdio.h>

typedef struct
{
    char name[50];
    int age;
} people;


int main()
{
    int N,idx,max,i,j;

    printf("Enter number of people: ");
    scanf("%d", &N);

    people a[N],t;

    for (i=0 ; i<N ; i++)
        scanf("%s %d", a[i].name, &a[i].age);

    for (j=0; j<N-1 ; j++)
    {
        max = a[j].age;
        idx = j;
        for(i=j+1 ; i<N ; i++)
        {

            if (max < a[i].age)
            {
                idx = i;
                max = a[i].age;
            }
        }
        t = a[j];
        a[j] = a[idx];
        a[idx] = t;

    }

    for (i=0 ; i<N ; i++)
        printf("\n%s %d", a[i].name, a[i].age);

    return 0;
}
