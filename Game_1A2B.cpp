#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 
{
 		char guess[4], cpans[4];
		int count=0, a, b, i,j;
		int sum,c,d;
		
		srand((unsigned)time(NULL));  
        for(int c=0;c<4;c++){
        	cpans[c]=rand()%10+48;
			for(int d=0;d<c;d++){
				if(cpans[c]==cpans[d]){
					c--;
				}
			} 
		}   
			do{	
			a=0;
		    b=0;
			printf("�п�J�q���Ʀr(�|���) :");
			scanf("%s", &guess);
			count++;
			for (i=0;i<4;i++){
			   for (j=0;j<4;j++){
			      if((cpans[i] == guess[j])&&(i==j)){
			         a=a+1;
				   } 
				   else if ((cpans[i] == guess[j])&&(i!=j)){
				     b=b+1; 
			       } 			    
			    } 				  
			 }  
			   sum = a ;			 		
	 		if (sum == 4){
			    printf("���G! �q��F, ���׬O %s\n", guess);
			  	break;
	         }	 
			    printf("�z�����׬O %d A %d B ! �[�o !!\n",a,b);
				 
		} while(1);	/*�L�a�j��*/ 
		printf("\n�`�@�q�F %d ��!\n\n", count);
 		
		system("PAUSE");	
 		return 0;
}

