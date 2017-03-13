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
char copynm(char *s1,char *s2,int n,int m){
	int i;
	for (i=n-1;i<m;i++){
		s2[i-n+1]=s1[i];
	}
	return *s2;
}
int main(int argc, char* argv[]){
	char *cad1 = argv[1];
	char *cad2 = (char*)malloc(len(cad1));
	int n=atoi(argv[3]);
	int m=atoi(argv[4]);
	copynm(cad1,cad2,n,m);
	printf("%s\n",cad2);
	return 0;
}