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
			printf("請輸入猜測數字(四位數) :");
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
			    printf("賓果! 猜對了, 答案是 %s\n", guess);
			  	break;
	         }	 
			    printf("您的答案是 %d A %d B ! 加油 !!\n",a,b);
				 
		} while(1);	/*無窮迴圈*/ 
		printf("\n總共猜了 %d 次!\n\n", count);
 		
		system("PAUSE");	
 		return 0;
}

