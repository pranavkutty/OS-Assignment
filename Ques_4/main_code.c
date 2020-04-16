#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

int num;                     // size of fibonacci sequence.  
int *fib;                    // arry with value of each fibonacci term.
int i;                       // counter for threads.

void *runn(void *arg);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("format is:./a.out <intgervalue>\n");
        return -1;
    }                           // valdiate num of args.

    if (atoi(argv[1]) < 0)
    {
        printf("%d must be>=0\n", atoi(argv[1]));
        return -1;
    }                           // valdiate value of arg1.

    num = atoi(argv[1]);
    fib = (int *)malloc(num * sizeof(int));
    pthread_t *threads = (pthread_t *) malloc(num * sizeof(pthread_t));
    pthread_attr_t attr;        // set of thread attribute

    pthread_attr_init(&attr);

	for (i = 0; i < num; i++)
{
    pthread_create(&threads[i], &attr, runn, NULL);
    pthread_join(threads[i], NULL);
}                          // End of wating the threads to exit.

    // printing fibonacci sequence
    printf("The Fibonacci sequence.:");
    int k;

    for (k = 0; k < num; k++)
    {
        printf("%d,", fib[k]);
    }                           // End of printing fibonnaci sequence
    return 0;
}                               // End of main.

void *runn(void *arg)
{
    if (i == 0)
    {
        fib[i] = 0;
        pthread_exit(0);
    }                           // first fib term

    if (i == 1)
    {
        fib[i] = 1;
        pthread_exit(0);
    }                           // second fib term
    else
    {
	fib[i] = fib[i - 1] + fib[i - 2];
	pthread_exit(0);         // thread exit.
    }                           // End of else
} 
