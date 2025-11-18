#include<stdio.h>
#include<string.h>
#define MAX 50

struct Information {
    int id;
    char name[50];
    int age;
    char phoneNumber[10];
};

int main() {
    struct Information sv[MAX];
    int n = 5;

    for (int i = 0; i < n; i++) {
        sv[i].id = i + 1;

        printf("Nhap ten SV %d: ", i+1);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi SV %d: ", i+1);
        scanf("%d", &sv[i].age);
        getchar();

        printf("Nhap so dien thoai: ");
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
        sv[i].phoneNumber[strcspn(sv[i].phoneNumber, "\n")] = '\0';
    }

    int add,pos = -1;
    printf("Nhap ID muon chen: ");
    scanf("%d",&add);
    getchar();
    
    for(int i = 0;i<n;i++){
    	if(add == sv[i].id){
    		pos = i;
		}
	}
    if(pos == -1){
    	printf("khong tim thay");
	}else{
		for(int i = n; i>pos;i--){
			printf("ID moi: ");
			scanf("%d",&sv[pos].id);
			getchar();
			printf("Ten sv moi: ");
			fgets(sv[pos].name,sizeof(sv[pos].name),stdin);
			sv[pos].name[strcspn(sv[pos].name,"\n")] = '\0';
			printf("Tuoi sv moi: ");
			scanf("%d",sv[pos].age);
			getchar();
			printf("SDT sv moi: ");
			fgets(sv[pos].phoneNumber,sizeof(sv[pos].phoneNumber),stdin);
			sv[pos].phoneNumber[strcspn(sv[pos].phoneNumber,"\n")] = '\0';
		}
	}
	printf("-----Mang sau khi chen-----\n");
	for(int i = 0;i<n;i++){
    	printf("ID: %d\n",sv[i].id);
    	printf("Ten sv: %s\n",sv[i].name);
    	printf("Tuoi sv: %d\n",sv[i].age);
    	printf("SDT sv: %s\n",sv[i].phoneNumber);
	}
    
    return 0;
    
}
