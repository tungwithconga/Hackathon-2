#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct cdList {
    int id;
    char name[50];
    float duration;
    char content[100];
    bool status;
};
void displayCD(struct cdList arr[],int size){
	 for (int i = 0; i < size; i++) {
                printf("Id: %d\n", arr[i].id);
                printf("Ten phim: %s\n", arr[i].name);
                printf("Thoi luong: %.2f phut\n", arr[i].duration);
                printf("Noi dung: %s\n", arr[i].content);
                printf("---------------------------------\n");
            }
} 

int main() {
    struct cdList cd1 = {1, "Phim sieu nhan gao", 120, "Phim bien hinh danh nhau", true};
    struct cdList cd2 = {2, "Phim ma kinh di", 125, "Phim mau me be bet", true};
    struct cdList cd3 = {3, "Phim ngon tinh hon hit", 135, "Phim tinh cam lang man", true};
    struct cdList list[100] = {cd1, cd2,cd3};
    int cdSize = 3;

    int choice;
    printf("\n************************MENU**************************");
    printf("\n1. In toan bo danh sach cd co o trong mang cdList tren cung mot hang");
    printf("\n2. Them moi cd vao vi tri cuoi cung cua cdList");
    printf("\n3. Cap nhat thong tin cua mot cd");
    printf("\n4. Xoa mot cd");
    printf("\n5. Sap xep");
    printf("\n6. Tim kiem thong tin cua cd");
    printf("\n7. In ra toan bo thong tin cua cac cd theo status\n");
    printf("Lua chon cua ban la:");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
           displayCD(list,cdSize);
            break;
        case 2:
            if (cdSize < 100) {
                struct cdList newCd;
                printf("Nhap vao id cua cd: ");
                scanf("%d", &newCd.id);

                printf("Nhap vao ten cua cd: ");
                scanf(" %[^\n]", newCd.name);

                printf("Nhap vao thoi luong cua cd: ");
                scanf("%f", &newCd.duration);

                printf("Nhap vao noi dung cua cd: ");
                scanf(" %[^\n]", newCd.content);

                list[cdSize] = newCd;
                cdSize++;
                displayCD(list,cdSize);
            } else {
                printf("Mang da day, khong the them moi CD.\n");
            }
            break;
            case 3:
			char answer[100];
			printf ("Nhap vao cd ban muon chinh sua: \n");
			gets(answer);
            

    }

    return 0;
}

