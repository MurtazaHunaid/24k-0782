#include <stdio.h>
int is_prime(int num); 
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (is_prime(num)) {
        printf("%d is a prime number\n", num); }
    else {
        printf("%d is not a prime number\n", num); }
    return 0;
}

int is_prime(int num) {
    if (num <= 1) {
        return 0; }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; } }
    return 1; 
}
