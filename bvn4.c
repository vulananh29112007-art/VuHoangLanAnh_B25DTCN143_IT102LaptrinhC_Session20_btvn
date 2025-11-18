#include<stdio.h>
#include<string.h>
struct Information {
	int id;
	char name[50];
	int age;
	char phoneNumber[10];
};
int main(){
	struct Information sv[5];
	int id = 0;
	
	for(int i = 0;i<5;i++){
		printf("Nhap ten cua sinh vien %d: ",i+1);
	    fgets(sv[i].name,sizeof(sv[i].name),stdin);
	    sv[i].name[strcspn(sv[i].name,"\n")] = '\0';
	    
		printf("Nhap tuoi cua sinh vien %d: ",i+1);
	    scanf("%d",&sv[i].age);
	    getchar();
	    
		printf("Nhap sdt cua sinh vien %d: ",i+1);
	    fgets(sv[i].phoneNumber,sizeof(sv[i].phoneNumber),stdin);
	    sv[i].phoneNumber[strcspn(sv[i].phoneNumber,"\n")] = '\0';
	}
	
	for(int i = 0;i<5;i++){
		id++;
		printf("ID: %d\n",id);
		printf("Ten sinh vien %d la: %s\n",i + 1,sv[i].name);
	    printf("Tuoi sinh vien %d la: %d\n",i + 1,sv[i].age);
	    printf("Sdt sinh vien %d la: %s\n",i + 1,sv[i].phoneNumber);
	}


   return 0;
}


