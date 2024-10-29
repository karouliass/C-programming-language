#include<stdio.h>
#define MAX_NUM 100
int epilogh,j,h,i,t,x,o,m,k=0,l=0;//k is the counter of inserted numbers and l is a counter of inserted even number
int array[MAX_NUM];
int even_array[MAX_NUM];
int min;
float average=0;
int main(){
	do{//menu options
		printf("\n1 Insert new number");
		printf("\n2 Show smallest number");
		printf("\n3 Show numbers that are bigger than the first inserted number");
		printf("\n4 Calculate the average of even numbers");
		printf("\n5 Show the last 'x' numbers");
		printf("\n6 Exit");
		do{
			printf("\nInsert one of six numbers so that you continue accordingly :");
			scanf("%d",&epilogh);
			if(epilogh<1||epilogh>6)
				printf("Insert a number between 1 and 6\n");
		}while(epilogh>6||epilogh<1);
		if(epilogh==1){//1 Insert new number
			printf("\nYou chose to enter a new number");
			printf("\nEnter an integral number :");
			scanf("%d",&array[k]);
			if(array[k]%2==0){//Even checker
				printf("It's even");
				even_array[l]= array[k];//Storing the number also in the even numbers list
				l++;
			}
			k++;
			printf("\n");
		}
		if(epilogh==2){//2 Show smallest number
			printf("\nYou chose to find the smallest number");
			min=array[0];
			for(i=0;i<k;i++)//loop for finding smallest number
			{
				if(min>array[i]){
					min=array[i];
				}
			}
			printf("\nThe smallest number is : %d\n",min);
		}
		if(epilogh==3){//3 Show numbers that are bigger than the first inserted number
			printf("\nYou chose to find numbers that are bigger than the first inserted number\n");
			m=0;
			printf("The numbers that are bigger than the first inserted number are :\n");
			for(j=1;j<k;j++){
				if(array[0]<array[j]){
					printf("%d\t",array[j]);
					m=1;
				}
			}
			printf("\n");
			if(m==0)
				printf("No number bigger than the first inserted was found\n");
			
		}
		if(epilogh==4){//4 Calculate the average of even numbers
			printf("\nYou chose to calculate the average of even numbers");
			average=0;
			for(t=0;t<l;t++){
				average=average+even_array[t];
			}
			average=average/l;
			printf("\nThe average of even numbers is : %f\n",average);
		}
		if(epilogh==5){//5 Show the last 'x' numbers
			printf("\nYou chose to see the last 'x' numbers");
			do{
				printf("\nEnter how many numbers will be shown from the end :");
				scanf("%d",&x);
				if(x>k)
					printf("\nYou haven't stored that many numbers !\nEnter a <= %d",k);
			}while(x>k);
			h=k-x;
			if(x==1)
				printf("\nThe last %d number is :\n",x);
			if(x!=1&&x!=0)
				printf("\nThe last %d numbers are :\n",x);
			if(x==0)
				printf("No numbers\n");
			for(o=h;o<k;o++){
				printf("%d\t",array[o]);
			}
			printf("\n");
		}
		if(epilogh==6)//6 Exit
			printf("Exiting!");
	}while(epilogh!=6);
	return 0;
}