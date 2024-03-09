#include <stdio.h>
#include <unistd.h>
void p(int i) 
{
    printf("Philosopher %d picks up forks and starts eating\n", i);
    sleep(1);
}
void d(int i) 
{
    printf("Philosopher %d puts down forks and starts thinking\n", i);
    sleep(1);
}
void f(int i) 
{
    p(i);
    d(i);
}
int main() 
{
    f(0);
    f(1);
    f(2);
    f(3);
    f(4);
    return 0;
}
