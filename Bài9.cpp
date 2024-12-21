#include<stdio.h>
#include<string.h>
int main(){
	struct Dish {
		int id;
		char name[100];
		int price;
	}temp;
	struct Dish menu[5]={
		{1,"Fried chicken",99000},
		{2,"Apple Pie",15000},
		{3,"Cola",10000},
		{4,"Pizza",399000},
		{5,"Salad",20000},
		};
	int choice,count,val,pos,a,b,start,end,mid,cmp;
	char choice2,choice3;
	int n=5;
	int check;
	char index[100];
    do{
    	printf("MENU\n");
	    printf("1.In ra gia tri cac phan tu co trong menu theo dang 1.member:vale\n");
	    printf("2.Them mot phan tu vao vi tri chi dinh\n");
	    printf("3.Sua mot phan tu o vi tri chi dinh\n");
	    printf("4.Xoa mot phan tu o vi tri chi dinh\n");
	    printf("5.Sap xep cac phan tu(Khi lua chon menu cha thi hien thi menu con)\n");
	    printf("6.Tim kiem phan tu theo name nhap vao\n");
	    printf("7.Thoat\n");
    	printf("Lua chon cua ban: ");
    	scanf("%d",&choice);
    	switch(choice){
    		case 1:
    			for(int i=0;i<n;i++){
    				printf("%d.%s:%d",menu[i].id,menu[i].name,menu[i].price);
    				printf("\n");
				}
    			break;
    		case 2:
//    			printf ("moi ban nhap vi tri muon them:");
//		    	scanf ("%d",&pos);
//		    	for (int i=n; i>=pos-1; i--){
//		    		menu[i]=menu[i-1];
//				}
//				fflush(stdin);
//				printf ("moi bsn nhsp ten mon an muon them:");
//				fgets(menu[pos-1].name,sizeof(menu[pos-1]),stdin);
//				menu[pos-1].name[strcspn(menu[pos-1].name,"\n")]='\0';
//				printf ("moi ban nhap gia :");
//				scanf ("%d",&menu[pos-1].price);
//				n++;
//				for (int i=0; i<n; i++){
//			    printf ("%d.%s:%d\n",i+1,menu[i].name,menu[i].price);
//		       }
				break;
    		case 3:
    			printf ("Nhap vi tri muon sua: ");
		    	scanf ("%d",&pos);
		    	fflush(stdin);
				printf ("Nhap ten mon an muon sua: ");
				fgets(menu[pos-1].name,100,stdin);
				menu[pos-1].name[strcspn(menu[pos-1].name,"\n")]='\0';
				printf ("Nhap gia tien mon an: ");
				scanf ("%d",&menu[pos-1].price);
		    	for (int i=0; i<n; i++){
			    printf ("%d.%s:%d\n",i+1,menu[i].name,menu[i].price);
		        }
    			break;
    		case 4:
    			printf ("Nhap vi tri muon xoa: ");
				scanf ("%d",&pos-1);
		    	for (int i=pos; i<n; i++){
		    		menu[i]=menu[i+1];
				}
				n--;
				for (int i=0; i<n; i++){
			    printf ("%d.%s:%d\n",i+1,menu[i].name,menu[i].price);
		        }
    			break;
    		case 5:
    			printf("Chon cach sap xep\n");
    			printf("a. Giam dan theo price\n");
    			printf("b. Tang dan theo price\n");
    			printf("Lua chon cua ban: ");
    			scanf(" %c",&choice2);
    			switch (choice2){
    				case 'a':
    				    for(int i=0;i<n;i++){
    		    	        for(int j=0;j<n-1-i;j++){
    		    		        if(menu[j+1].price<menu[j].price){
    		    			        temp=menu[j];
    		    			        menu[j]=menu[j+1];
    		    			        menu[j+1]=temp;
						        }
					        }
				        }
				        for(int i=0;i<n;i++){
					        printf("%d.%s:%d",i+1,menu[i].name,menu[i].price);
					        printf("\n");
				        }
				        break;
				    case 'b':
					    for(int i=0;i<n;i++){
    		    	        for(int j=0;j<n-1-i;j++){
    		    		        if(menu[j+1].price>menu[j].price){
    		    			        temp=menu[j];
    		    			        menu[j]=menu[j+1];
    		    			        menu[j+1]=temp;
						        }
					        }
				        }
				        for(int i=0;i<n;i++){
					        printf("%d.%s:%d",i+1,menu[i].name,menu[i].price);
					        printf("\n");
				        }
				        break;
				}
				break;
    		case 6:
    			printf("Chon cach tim kiem\n");
    			printf("a.Tim kiem tuyen tinh\n");
    			printf("b.Tim kiem nhi phan\n");
    			printf("Lua chon cua ban: ");
    			scanf(" %c",&choice3);
    			switch(choice3){
    				case 'a':
    					fflush(stdin);
    					printf("Nhap mon an muon tim: ");
    					fgets(index,sizeof(index),stdin);
    					index[strcspn(index,"\n")]='\0';
    					check=-1;
    					for(int i=0;i<n;i++){
							if(strcmp(menu[i].name,index)==0){
								check=i;
								printf("Mon %s nam o vi tri %d trong menu",index,menu[i].id);
							    printf("\n");
							    break;
							}
						}
					    if(check==-1){
							printf("Khong co %s trong menu",index);
							printf("\n");
					    }
						break;
    				case 'b':
//    					for(int i=0;i<n;i++){
//    						for(int j=0;j<n-1-i;j++){
//    							if(strcmp(menu[j+1].name,menu[j].name)<0){
//    								struct Dish temp=menu[j];
//    								menu[j]=menu[j+1];
//    								menu[j+1]=temp;
//								}
//							}
//						}
//						fflush(stdin);
//						printf("Nhap mon an muon tim: ");
//						fgets(index,sizeof(index),stdin);
//						index[strcspn(index,"\n")]='\0';
//						start=0;
//						end = n-1;
//						mid=-1;
//						while(start<=end){
//							mid=(start+end)/2;
//							cmp = (strcmp(menu[mid].name,index));
//							if(cmp==0){
//								check=mid;
//								break;
//						}
//						else if(cmp>0){
//							end = mid-1;
//						}
//						else{
//							start=mid+1;
//							break;
//						}
//				}
//				if(check==-1){
//				    printf("Khong co %s trong menu",index);
//				    printf("\n");
//			    }else{
//			    	printf("Mon %s nam o vi tri %d trong menu",index,menu[mid].id);
//			    	printf("\n");
//				}
//		    }
    			break;
    	    }
    		case 7:
    			printf("Chuong trinh ket thuc");
    			break;
    			default:
    			printf("Lua chon khong hop le\n");
    		
		}
	}while(choice!=7);
	return 0;
}
