 
#include<stdio.h> 
#include<stdlib.h> 
 
void display(int n); 
void search(); 
void insert(); 
void insert_b(); 
void insert_m(); 
void insert_p(); 
void insert_e(); 
void deletee(); 
void delete_b(); 
void delete_m(); 
void delete_p(); 
void delete_e(); 
void display_rev(); 
void revert(); 
 
struct node 
{ 
int data; 
struct node* next; 
} *temp, *head, *newNode; 
 
int main() 
{ 
int n,i,choice; 
do{ 
printf("Enter number of nodes: "); 
scanf("%d",&n); 
}while(n==0); 
head=NULL; 
 
for(i=1;i<=n;i++) 
{ 
Data Strucures and Algorithms 
    Page 2 of 15 
 
struct node *newNode = (struct node*)malloc(sizeof(struct node)); 
printf("Data: "); 
scanf("%d",&newNode->data); 
newNode->next=NULL; 
if(head==NULL) 
{ 
head=newNode; 
temp=head; 
} 
else 
{ 
temp->next=newNode; 
temp=newNode; 
} 
} 
do 
{ 
printf("\n\n*****MENU*****"); 
printf("\n1. Display\n2. Search\n3. Insert\n4. Delete\n5. Only reverse the order\n6. Revert the 
List\n7. Exit"); 
printf("\nEnter your choice number: "); 
scanf("%d",&choice); 
//printf("\n"); 
switch(choice) 
{ 
case 1: 
display(n); 
break; 
case 2: 
search(); 
break; 
case 3: 
insert(); 
break; 
case 4: 
deletee(); 
break; 
case 5: 
display_rev(); 
break; 
case 6: 
revert(); 
break; 
case 7: 
printf("\n\n*****Thank You*****"); 
break; 
} 
}while(choice!=7); 
} 
 
void display(int n) 
{ 
int i; 
struct node* current=head; 
if(current==NULL && n==0) 
{ 
printf("*****EMPTY*****"); 
} 
while(current!=NULL) 
    Page 3 of 15 
 
{ 
printf("%d\t",current->data); 
current=current->next; 
} 
} 
 
void search() 
{ 
int found=0,item,count=1; 
printf("\nEnter the item to be searched: "); 
scanf("%d",&item); 
struct node* current=head; 
while(found==0 && current!= NULL) 
{ 
if(current->data==item) 
{ 
found=1; 
} 
else 
{ 
count++; 
current=current->next; 
} 
} 
if(found==1) 
{ 
printf("\n%d is found at: %d",item,count); 
} 
} 
 
void insert_b() 
{ 
newNode=(struct node*)malloc(sizeof(struct node)); 
printf("Data: "); 
scanf("%d",&newNode->data); 
newNode->next=head; 
head=newNode; 
} 
 
void insert_m() 
{ 
int i=1; 
int count=0; 
int mid; 
 
struct node* temp; 
newNode=(struct node*)malloc(sizeof(struct node)); 
printf("Data: "); 
scanf("%d",&newNode->data); 
temp=head; 
while(temp->next!=NULL) 
{ 
temp=temp->next; 
count++; 
//printf("count=%d",count); 
 
} 
if(count%2==0) 
{ 
    Page 4 of 15 
 
mid=count/2; 
//printf("\nmid=%d",mid); 
} 
else 
{ 
mid=(count/2)+1; 
//printf("\nmid=%d",mid); 
} 
temp=head; 
while(i<mid) 
{ 
temp=temp->next; 
i++; 
//printf("i=%d",i); 
} 
newNode->next=temp->next; 
temp->next=newNode; 
//printf("\nworks"); 
} 
void insert_p() 
{ 
int pos,i=0; 
struct node* temp; 
newNode=(struct node*)malloc(sizeof(struct node)); 
printf("Data: "); 
scanf("%d",&newNode->data); 
printf("Enter the position: "); 
scanf("%d",&pos); 
temp=head; 
while(i<pos) 
{ 
temp=temp->next; 
i++; 
} 
newNode->next=temp->next; 
temp->next=newNode; 
} 
 
void insert_e() 
{ 
struct node* current; 
newNode=(struct node*)malloc(sizeof(struct node)); 
printf("Data: "); 
scanf("%d",&newNode->data); 
newNode->next=NULL; 
current=head; 
while(current->next!=NULL) 
{ 
current=current->next; 
} 
current->next=newNode; 
} 
 
void insert() 
{ 
int choice; 
do 
{ 
printf("\n\n*****MENU*****"); 
    Page 5 of 15 
 
printf("\n1. beginning\n2. middle\n3. from given position\n4. end\n5. Exit"); 
printf("\nEnter your choice number: "); 
scanf("%d",&choice); 
switch(choice) 
{ 
case 1: 
insert_b(); 
break; 
case 2: 
insert_m(); 
break; 
case 3: 
insert_p(); 
break; 
case 4: 
insert_e(); 
break; 
case 5: 
printf("\n\n*****Thank You*****"); 
break; 
} 
}while(choice!=5); 
 
} 
 
void delete_b() 
{ 
struct node* temp=head; 
head=temp->next; 
free(temp); 
} 
 
void delete_m() 
{ 
int i=1; 
int count=0; 
int mid; 
 
struct node* temp; 
//newNode=(struct node*)malloc(sizeof(struct node)); 
//printf("Data: "); 
//scanf("%d",&newNode->data); 
temp=head; 
while(temp->next!=NULL) 
{ 
temp=temp->next; 
count++; 
//printf("count=%d",count); 
 
} 
if(count%2==0) 
{ 
mid=count/2; 
//printf("\nmid=%d",mid); 
} 
else 
{ 
mid=(count/2)+1; 
//printf("\nmid=%d",mid); 
    Page 6 of 15 
 
} 
//idiot remember the next line. 
temp=head; 
while(i<mid) 
{ 
temp=temp->next; 
i++; 
//printf("i=%d",i); 
} 
newNode=temp->next; 
temp->next=newNode->next; 
free(newNode); 
//printf("\nworks"); 
} 
 
void delete_p() 
{ 
int pos,i=1; 
struct node* temp; 
//newNode=(struct node*)malloc(sizeof(struct node)); 
//printf("Data: "); 
//scanf("%d",&newNode->data); 
printf("Enter the position: "); 
scanf("%d",&pos); 
temp=head; 
while(i<pos-1) 
{ 
temp=temp->next; 
i++; 
} 
newNode=temp->next; 
temp->next=newNode->next; 
free(newNode); 
} 
 
void delete_e() 
{ 
struct node* current, *preNode; 
//newNode=(struct node*)malloc(sizeof(struct node)); 
//printf("Data: "); 
//scanf("%d",&newNode->data); 
//newNode->next=NULL; 
current=head; 
preNode=head; 
while(current->next!=NULL) 
{ 
preNode=current; 
current=current->next; 
} 
preNode->next=NULL; 
free(current); 
} 
void deletee() 
{ 
int choice; 
do 
{ 
printf("\n\n*****MENU*****"); 
printf("\n1. beginning\n2. middle\n3. from given position\n4. end\n5. Exit"); 
    Page 7 of 15 
 
printf("\nEnter your choice number: "); 
scanf("%d",&choice); 
switch(choice) 
{ 
case 1: 
delete_b(); 
break; 
case 2: 
delete_m(); 
break; 
case 3: 
delete_p(); 
break; 
case 4: 
delete_e(); 
break; 
case 5: 
printf("\n\n*****Thank You*****"); 
break; 
} 
}while(choice!=5); 
} 
 
void display_rev() 
{ 
struct node *temp, *temp1, *var; 
temp=head; 
var=NULL; 
while(temp!=NULL) 
{ 
temp1=var; 
var=temp; 
temp=temp->next; 
var->next=temp1; 
//printf("%d\t",var->data); 
} 
head=var; 
} 
 
void revert() 
{ 
struct node *prev, *temp, *next; 
prev=NULL; 
temp=head; 
while(temp!=NULL) 
{ 
next=temp->next; 
temp->next=prev; 
prev=temp; 
temp=next; 
} 
head=prev; 
} 
