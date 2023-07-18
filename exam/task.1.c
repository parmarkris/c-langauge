#include<stdio.h>

 int main(){
 
    char s[1000];
    
    int i,n,c=0;
    
    printf("enter the string : ");
    gets(s);
    n=strlen(s);
    
    for (i=0; i<n/2;i++)
 
 
    if (s[1]==s[n-i-1])
    c++;
    
    {
      if(c==i)
	    printf("string is pailndrome");
	    
	    else 
	      printf("string is not pailndrone");
	      
	      
	      
}
    	
    	
    	
     return 0;	
}
    	
    	
    	
	
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
