#include<stdio.h>
#include<time.h>
int main(int argc, const char *argv[])
{
	time_t timer;
	struct tm *t;
	timer = time(NULL);
	t = localtime(&timer);
	printf("%d\n", t->tm_hour);
	switch( t ->tm_hour){
		case 12 : printf("lunch! \n");
			  break;
		case 18 : printf("dinner! \n");
			  break;
		default : printf("... \n");
	}
	return 0;
}
