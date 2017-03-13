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
char copy(char *s1, char *s2){
	int i;
	for (i=0;i<len(s1);i++){
		s2[i]=s1[i];
	}
	return *s2;
}
int main(int argc, char* argv[]){
	char *cad1 = argv[1];
	char *cad2 = (char*)malloc(len(cad1));
	copy(cad1,cad2);
	printf("%s\n",cad2);
	return 0;
}