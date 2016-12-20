#include<stdio.h>

int counter = 0;


void hanoiTower(int n, char from, char to, char aux)
{
    counter++;
    if(n == 1)
    {
        printf("move disc %d from %c to %c\n", 1, from, to);
        return;
    }
    else
    {
        hanoiTower(n-1,from, aux, to);
        printf("move disk %d from %c to %c\n", n, from, to);
        hanoiTower(n-1,aux, to, from);
    }
}

int main()
{
    hanoiTower(4,'A','C','B');
    printf("%d\n",counter);
    int counter = 0;
    printf("total move %d\n",counter);
    printf("%d\n", returCounter());
}

int returCounter()
{
    return counter;
}
