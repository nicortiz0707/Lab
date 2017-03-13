#include <stdio.h>
#include <stdlib.h>
int len(char *sj){
	int i;
	int n=0;
	for(i=0;sj[i]!='\0';i++){
		n++;
	}
	return n;
}
char *haciamayusculas(char *sg, char sr[]){
	int i;
	for(i=0;i<len(sg);i++){
		sr[i]= sg[i] - 32;
	}
	return sr;
}
int main(int argc, char* argv[]){
	char sr[len(argv[1])];
	char *s1=(char*)malloc(len(argv[1])+1);
	s1 = haciamayusculas(argv[1],sr);
	printf("%s\n",s1);
	return 0;
}