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

        printf("Nhap ten sv %d: ", i+1);
        fgets(sv[i].name, sizeof(sv[i].name), stdin);
        sv[i].name[strcspn(sv[i].name, "\n")] = '\0';

        printf("Nhap tuoi sv %d: ", i+1);
        scanf("%d", &sv[i].age);
        getchar();

        printf("Nhap so dien thoai sv %d: ", i+1);
        fgets(sv[i].phoneNumber, sizeof(sv[i].phoneNumber), stdin);
        sv[i].phoneNumber[strcspn(sv[i].phoneNumber, "\n")] = '\0';
    }
    sv[n].id = n+1;
    printf("Nhap ten sv cuoi mang: ");
    fgets(sv[n].name,sizeof(sv[n].name),stdin);
    sv[n].name[strcspn(sv[n].name,"\n")] = "\0";
    
    printf("Nhap tuoi sv cuoi mang: ");
    scanf("%d",&sv[n].age);
    getchar();
    
    printf("Nhap sdt sv cuoi mang: \n");
    fgets(sv[n].phoneNumber,sizeof(sv[n].phoneNumber),stdin);
    sv[n].phoneNumber[strcspn(sv[n].phoneNumber,"\n")] = "\0";
    n++;
    
    printf("Mang sau khi them sv\n");
    for(int i = 0;i<n;i++){
    	printf("ID: %d\n",sv[i].id);
    	printf("Ten sv: %s\n",sv[i].name);
    	printf("Tuoi sv: %d\n",sv[i].age);
    	printf("SDT sv: %s\n",sv[i].phoneNumber);
	}

    return 0;
}
    
