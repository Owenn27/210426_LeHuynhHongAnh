#include <stdio.h>

// Khai báo các function
void function1();  // Từ shell1.c
void function2();  // Từ shell2.c

int main() {
    function1();  // Gọi function từ shell1
    function2();  // Gọi function từ shell2
    return 0;
}
