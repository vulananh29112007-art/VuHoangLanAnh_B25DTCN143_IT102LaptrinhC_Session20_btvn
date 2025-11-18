#include<stdio.h>
struct Information {
	char name[50];
	int age;
	char phoneNumber[10];
};
struct Information sv_01 = { "Vu Hoang Lan Anh" , 17, "0123456789"};
int main(){
	printf("Ten cua sinh vien 1: %s\n",sv_01.name);
	printf("Tuoi cua sinh vien 1: %d\n",sv_01.age);
	printf("Sdt cua sinh vien 1: %s",sv_01.phoneNumber);


   return 0;
}

