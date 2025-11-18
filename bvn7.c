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

    int idSearch, found = -1;
    printf("Nhap ID can tim kiem: ");
    scanf("%d", &idSearch);
    for(int i = 0;i<n;i++){
    	if(idSearch == sv[i].id){
    		found = i;
		}
	}
    if(found == -1){
    	printf("Khong tim thay ID\n");
	}else{
		for(int i = found;i<n;i++){
			sv[i] = sv[i+1];
		}
		n--;
	}
	printf("-----Mang sau khi xoa-----\n");
	for(int i = 0;i<n;i++){
    	printf("ID: %d\n",sv[i].id);
    	printf("Ten sv: %s\n",sv[i].name);
    	printf("Tuoi sv: %d\n",sv[i].age);
    	printf("SDT sv: %s\n",sv[i].phoneNumber);
	}
    
    return 0;
    
}
