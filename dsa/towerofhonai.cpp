#include <stdio.h>
void TOH(int, char, char, char); 
int main()
{
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    TOH(n, 'A', 'C', 'B');
    return 0;
}

void TOH(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    TOH(n - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);
    TOH(n - 1, aux_rod, to_rod, from_rod);
}
