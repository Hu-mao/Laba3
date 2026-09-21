#include <stdio.h>
#include <locale>
int main() {
    setlocale(LC_ALL, "Ukrainian"); // для укр мови у терміналі
    //1
    int N = 57;

    //2
    int op_not = 18 - N;      

    int op_and1 = 89 - N;     
    int op_and2 = 122 - N;     

    int op_or1 = 134 - N;    
    int op_or2 = 65 - N;       

    int op_xor1 = 34 - N;    
    int op_xor2 = 78 - N;    

    int op_shl1 = 907 - N;    
    int op_shl2 = N + 1;    

    int op_shr1 = -95 - N;    
    int op_shr2 = N + 1;    

    // Порозрядне заперечення (NOT: ~)
    printf("Порозрядне заперечення (~%d): %d\n", op_not, ~op_not);  //%dбо вдобніше було; оператор форматний специфікатор

    // Порозрядне "І" (AND: &)
    printf("Порозрядне 'І' (%d & %d): %d\n", op_and1, op_and2, op_and1 & op_and2);

    // Порозрядне "АБО" (OR: |)
    printf("Порозрядне 'АБО' (%d | %d): %d\n", op_or1, op_or2, op_or1 | op_or2);

    // Порозрядне "АБО", яке виключає (XOR: ^)
    printf("Порозрядне 'виключаюче АБО' (%d ^ %d): %d\n", op_xor1, op_xor2, op_xor1 ^ op_xor2);

    // Порозрядний зсув ліворуч (<<)
    printf("Порозрядний зсув ліворуч (%d << %d): %d\n", op_shl1, op_shl2, op_shl1 << op_shl2);

    // Порозрядний зсув праворуч (>>)
    printf("Порозрядний зсув праворуч (%d >> %d): %d\n", op_shr1, op_shr2, op_shr1 >> op_shr2);

    return 0;
}