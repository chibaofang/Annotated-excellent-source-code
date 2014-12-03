#include<stdlib.h>
#include<time.h>
// generate random number
void generate(char string[], int len){
	int i;
	for (i = 0;i <len; i++){
		string[i] = 's'+(rand()%4+1)
	}
}
