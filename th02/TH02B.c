#include <stdio.h>
#include <stdlib.h>
int main(){
    int a;
    printf("Nhập một số từ 0 đến 9:");
    scanf("%d", &a);
switch(a)
{
    case 0: printf("không\n");break;
    case 1: printf("một\n");break;
    case 2: printf("hai\n");break;
    case 3: printf("ba\n");break;
    case 4: printf("bốn\n");break;
    case 5: printf("năm\n");break;
    case 6: printf("sáu\n");break;
    case 7: printf("bảy\n");break;
    case 8: printf("tám\n");break;
    case 9: printf("chín\n");break;
    default: printf("Số không hợp lệ\n"); break;
}
}