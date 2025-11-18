#include<stdio.h>
#include<string.h>
struct Information {
	char name[50];
	int age;
	char phoneNumber[10];
};
int main(){
	struct Information sv_01;
	printf("Nhap ten cua sinh vien 1: ");
	fgets(sv_01.name,sizeof(sv_01),stdin);
	sv_01.name[strcspn(sv_01.name,"\n")] = '\0';
	printf("Nhap tuoi cua sinh vien 1: ");
	scanf("%d",&sv_01.age);
	getchar();
	printf("Nhap sdt cua sinh vien 1: ");
	fgets(sv_01.phoneNumber,sizeof(sv_01),stdin);
	sv_01.phoneNumber[strcspn(sv_01.phoneNumber,"\n")] = '\0';
	printf("Ten sinh vien 1: %s\n",sv_01.name);
	printf("Tuoi sinh vien 1: %d\n",sv_01.age);
	printf("Sdt sinh vien 1: %s",sv_01.phoneNumber);


   return 0;
}

