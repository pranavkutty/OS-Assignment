#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>


int num;                          // size of fibonacci sequence.
int *fib;                    // arry holds the value of each fibonacci term.
int i;                          // counter for the threads.


void *runn(void *arg)


int main(int argc, char *argv[])
{

    if (argc != 2)
    {
        printf("format is:./a.out <intgervalue>\n");
        return -1;
    }

    if (atoi(argv[1]) < 0)
    {
        printf("%d must be>=0\n", atoi(argv[1]));
        return -1;
    }  

    num = atoi(argv[1]);
    fib = (int *)malloc(num * sizeof(int));
    pthread_t *threads = (pthread_t *) malloc(num * sizeof(pthread_t));
    pthread_attr_t attr;        // set of thread attribute
    pthread_attr_init(&attr);

    for (i = 0; i < n; i++)	//waiting the threads for exit
    {
    	pthread_create(&threads[i], &attr, runn, NULL);
    	pthread_join(threads[i], NULL);
    }                          

    // print fib
    printf("The Fibonacci sequence.:");
    int k;
    for (k = 0; k < n; k++)
    {
        printf("%d,", fibseq[k]);
    }                           
    return 0;

}
