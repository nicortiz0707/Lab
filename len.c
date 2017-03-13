#include <stdio.h>
int len(char *sj){
	int i;
	int n=0;
	for(i=0;sj[i]!='\0';i++){
		n++;
	}
	return n;
}
int main(int argc, char* argv[]){
	int n = len(argv[1]);
	printf("%i\n",n);
	return 0;
}