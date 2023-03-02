#include <bits/stdc++.h>
#include <cstring>
#include <stdio.h>
using namespace std;

int main() {
  char str[1024];
  bool op=true;
  while(gets(str)){
  	int len=strlen(str);
    for(int i=0;i<len;i++){
    	if(str[i]=='"'){
        	if(op){
            printf("``");
            }
            else
            printf("''");
           op=!op;
           }
       else
           printf("%c",str[i]);
           }
        printf("\n");
  }
}
