#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Pozhaluysta vvedite vashe imya: ");
    string str = GetString();
    printf("Privet, %s\n", str);
    return 0;
}