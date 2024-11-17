#include <stdio.h>
#include <ctype.h>


int is_white(const char c) {
    int text = c;
    if (text == '\0' || text == '\n' || text == '\t' || text == ' ') return 1;
    return 0;
}


void change_whites(char string []) {
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' || string[i] == '\n') {
            string[i] = '.';
        }
    }
}


int guess_eval(const int guess, const int my_number) {
    if (guess > my_number ) return 0;
    else if (guess < my_number) return 2;
    else return 1;  
}

int leap_year(const int year) {
    if (year < 0 || year > 4444) return -1;
    if (year % 400 == 0) return 1;
    if (year % 100 == 0) return 0;
    if (year % 4 == 0) return 1;
    return 0;
}


int count_positives(const int size, const int array[]) {
    if (array == NULL) return -1;
    int quantity = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) quantity++;
    }
    return quantity;
}


int count_whites(const char string[]) {
    if (string == NULL) return -1;
    int quantity = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == ' ' || string[i] == '\t' || string[i] == '\n') quantity++;
    }
    return quantity;
}


int direction_correction(const int degree) {
    int n = degree;
    if (n < 0 || n % 90 != 0) return -1;
    else if (n > 360) n = n - 360;
    return n;
}


int all_positives(const int size, const int array[]) {
    if (array == NULL) return -1;
    int quantity = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) quantity++;
    }
    if (quantity == size) return 1;
    else return 0;
}

int last_positive(const int size, const int array[]) {
    if (array == NULL) return -1;
    int quantity = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] > 0) quantity = array[i];
    }
    if (quantity == 0) return -1; 
    return quantity;
}


int binary_num(const int num) {
    if (num > 1000 || num < -1000) return -1;
    if (num == 1 || num == 0) return 1;
    return 0;
}


void swap_sign(const int size, int array[]) {
    if (array == NULL) return;
    for (int i = 0; i < size; i++) {
        if (array[i] != 0) array[i] = -array[i];
    }
}


int div_by_3(const int num) {
    if (num % 3 == 0) return 1;
    return 0;
}


int same_case(const char a, const char b) {
    if (!isalpha(a) || !isalpha(b)) return -1;
    if (islower(a) && islower(b)) return 1;
    if (isupper(a) && isupper(b)) return 1;
    return 0;
}


int find_first_A(const char string[]) {
    if (string == NULL) return -1;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == 'A' || string[i] == 'a') return i;
    }
    return -1;
}


void string_to_upper(char string[]) {
    if (string == NULL) return;
    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] >= 'a' && string[i] <= 'z') {
            string[i] = string[i] - ('a' - 'A');
        }
    }
}


int main() {
// is_white
    printf("%d %d\n", is_white('#'), is_white(' '));

    char str[] = "Hello world!";
    change_whites(str);
    printf("%s\n", str);

// guess_eval
    printf("%d %d %d\n", guess_eval(32, 22), guess_eval(12, 22), guess_eval(22, 22));

// leap_year
    printf("%d %d %d\n", leap_year(4000), leap_year(3000), leap_year(3004));

// count_positives
    const int array1[] = {1,2,0,3,4,0}; 
    const int array2[] = {1,2,6,3,4,7};
    const int array3[] = {-1,-2,0,-3,0,-2};
    printf("%d %d %d\n", count_positives(6, array1), count_positives(6, array2), count_positives(6, array3));
    
// count_whites
    const char string[] = "Hello, how are you?";
    printf("%d\n", count_whites(string));

// direction_correction
    printf("%d %d %d\n", direction_correction(-90), direction_correction(540), direction_correction(180));

// all_positives
    printf("%d %d %d\n", all_positives(6, array1), all_positives(6, array2), all_positives(6, array3));

// last_positive
    printf("%d %d %d\n", last_positive(6, array1), last_positive(6, array2), last_positive(6, array3));

// binary_num
    printf("%d %d %d\n", binary_num(-1001), binary_num(3), binary_num(1));

// swap_sign
    int array[]= {1,2,0,-3,4,0};
    swap_sign(6, array);
    for(int i = 0; i < 6; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

// div_by_3
    printf("%d %d %d\n", div_by_3(-3), div_by_3(6), div_by_3(8));

// same_case
    printf("%d %d %d\n", same_case('a', 'f'), same_case('L', 'g'), same_case('#', 'P'));

// find_first_A
    printf("%d\n", find_first_A("Tomorrow afternoon"));

// string_to_upper
    char str2[] = "ahojte";
    string_to_upper(str2);
    printf("%s\n", str2);
    return 0;


}