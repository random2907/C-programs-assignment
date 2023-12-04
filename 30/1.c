#include <stdio.h>
#include <string.h>

struct library{
    int number[100];
    char title[100][100];
    char author[100][100];
    int price[100];
    int flag[100];
};

void bookinfo(char *title,char *author,int *price,int *flag){
    printf("Enter the title: ");
    scanf("%s",title);
    printf("Enter name of author: ");
    scanf("%s",author);
    printf("Enter the price: ");
    scanf("%d",price);
    printf("Enter 0 if not issued and 1 if issued: ");
    scanf("%d",flag);
}

void listauthor(char title[100][100],char author[100][100],int count){
    char user[100];
    printf("Enter author name: ");
    scanf("%s",&user);
    for (int i=0;i<count;i++){
        if (*user==*author[i]){
            printf("book: %s\n",title[i]);
        }
    }
}



int main(){
    struct library lie;
    int count=0;
    int user;
    do{
        printf("(1) Add book information\n(2) Display book information\n(3) List all books of given author\n(4) List the title specified by accession number\n(5) List the count of books in the library\n(6) List the books in the order of accession number\n(7) Exit)\n\n");
        printf("Enter choice: ");
        scanf("%d",&user);
        switch(user){
            case 1:
                lie.number[count]=count;
                bookinfo(lie.title[count],lie.author[count],&lie.price[count],&lie.flag[count]);
                count++;
                break;
            case 2:
                for (int i=0;i<count;i++){
                    printf("accession: %d\ntitle: %s\nauthor: %s\nprice: %d\n",lie.number[i],lie.title[i],lie.author[i],lie.price[i]);
                    printf("\n");
                    }
                break;
            case 3:
                listauthor(lie.title,lie.author,count);
                break;
            case 4:
                int acc;
                printf("Enter accession number: ");
                scanf("%d",&acc);
                printf("Title of the book is %s\n",lie.title[acc]);
                break;
            case 5:
                printf("no of books %d\n",count);
                break;
            case 6:
                for (int i=0;i<count;i++){
                    printf("%d %s\n",lie.number[i],lie.title[i]);
                    }
                break;
            default:
                break;
        }
    }while(user!=7);
    return 0;
}




