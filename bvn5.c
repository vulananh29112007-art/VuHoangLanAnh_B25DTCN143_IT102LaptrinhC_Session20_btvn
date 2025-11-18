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
    getchar();

    for (int i = 0; i < n; i++) {
        if (sv[i].id == idSearch) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Khong tim thay sinh vien co ID %d\n", idSearch);
    } else {
        printf("Nhap ten moi: ");
        fgets(sv[found].name, sizeof(sv[found].name), stdin);
        sv[found].name[strcspn(sv[found].name, "\n")] = '\0';

        printf("Nhap tuoi moi: ");
        scanf("%d", &sv[found].age);
    }

    for (int i = 0; i < n; i++) {
        printf("\nID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("SDT: %s\n", sv[i].phoneNumber);
    }

    return 0;
}

