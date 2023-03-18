#include <stdio.h>
#include <stdlib.h>

struct number{
	int n;
	struct number * next;
};

int main(){
	struct number * tete=NULL;
	struct number * num=malloc(sizeof(struct number));
	tete = malloc(sizeof(struct number));
	struct number * ptr = tete;
	int i;
	for(i=0;i<5;i++){
		printf("enter a number : ");
		scanf("%d", &ptr->n);
		ptr->next=malloc(sizeof(struct number));
		if(i==4){
			ptr->next=NULL;
		}else{
			ptr=ptr->next;
		}
	}
	
	printf("enter the a nubmer in the end of the list : \n");
	scanf("%d", &num->n);
	num->next=NULL;
	ptr->next=num;
	
	ptr=tete;
	printf("the list of the numbers : \n");
	while(ptr!=NULL){
		printf("%d\n",ptr->n);
		ptr=ptr->next;
	}
	return 0;
}
