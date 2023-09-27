#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickles(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents = get_cents();
    int quarters = calculate_quarters(cents);
    cents = cents - (quarters * 25);
    int dimes = calculate_dimes(cents);
    cents = cents - (dimes * 10);
    int nickles = calculate_nickles(cents);
    cents = cents - (nickles * 5);
    int pennies = calculate_pennies(cents);
    printf("El quarter es %i \n",quarters);
    printf("El dime es %i \n",dimes);
    printf("El nickle es %i \n",nickles);
    printf("El pennie es %i \n",pennies);

}

int get_cents(void)
{
    int n;
    printf("Introduce cents: ");
    scanf("%i",&n);
    return n;
}

int calculate_quarters(int cents)
{
    int quarters = cents/25;
    return quarters;
}

int calculate_dimes(int cents)
{
    int dimes = cents/10;
    return dimes;
}

int calculate_nickles(int cents)
{
    int nickles = cents/5;
    return nickles;
}


int calculate_pennies(int cents)
{
    int pennies = cents/1;
    return pennies;
}