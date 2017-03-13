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
char *asignarcadena(char *sg, char a){
	int i;
	for(i=0;i<len(sg);i++){
		sg[i]=a;
	}
	return sg;
}
int main(int argc, char* argv[]){
	char *cad1 = argv[1];
	asignarcadena(cad1,argv[2][0]);
	printf("%s\n",cad1);
	return 0;
}