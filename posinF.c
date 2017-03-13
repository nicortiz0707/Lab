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

int posinF(char *s, char a){
	int i;
	int n = len(s);
	for(i=n-1;i>=0;i--){
		if(s[i]==a){
			return i;
		}
	}
	return -1;
}

int main(int argc, char* argv[]){
	printf("%i\n",posinF(argv[1],argv[2][0]));
	return 0;
}