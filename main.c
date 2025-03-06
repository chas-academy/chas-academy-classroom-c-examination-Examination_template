//Write your code in this file

/* ---- Solution starts here ------*/

#include <stdio.h>

// Function to convert a lowercase letter to uppercase
char convert_to_capital(char letter) {
    if (letter >= 'a') {
        if (letter <= 'z') {
            return letter - ('a' - 'A'); // Convert to uppercase
        }
    }
    return letter; // Return as is if already uppercase
}

int main() {
    char name1[20], name2[20], name3[20], name4[20], name5[20];
    int score1[13], score2[13], score3[13], score4[13], score5[13];
    float avg1 = 0, avg2 = 0, avg3 = 0, avg4 = 0, avg5 = 0;

    // Step 1: Read names and scores
    scanf("%s", name1);
    name1[0] = convert_to_capital(name1[0]); // Capitalize first letter straight away
    for (int i = 0; i < 13; i++) {
        scanf("%d", &score1[i]);
    }
    
    scanf("%s", name2);
    name2[0] = convert_to_capital(name2[0]);
    for (int i = 0; i < 13; i++) {
        scanf("%d", &score2[i]);
    }
    
    scanf("%s", name3);
    name3[0] = convert_to_capital(name3[0]);
    for (int i = 0; i < 13; i++) {
        scanf("%d", &score3[i]);
    }
    
    scanf("%s", name4);
    name4[0] = convert_to_capital(name4[0]);
    for (int i = 0; i < 13; i++) {
        scanf("%d", &score4[i]);
    }
    
    scanf("%s", name5);
    name5[0] = convert_to_capital(name5[0]);
    for (int i = 0; i < 13; i++) {
        scanf("%d", &score5[i]);
    }

    // Step 2: Calculate average scores
    int sum = 0;
    for (int i = 0; i < 13; i++) {
        sum += score1[i];
    }
    avg1 = sum / 13.0;

    sum = 0;
    for (int i = 0; i < 13; i++) {
        sum += score2[i];
    }
    avg2 = sum / 13.0;

    sum = 0;
    for (int i = 0; i < 13; i++) {
        sum += score3[i];
    }
    avg3 = sum / 13.0;

    sum = 0;
    for (int i = 0; i < 13; i++) {
        sum += score4[i];
    }
    avg4 = sum / 13.0;

    sum = 0;
    for (int i = 0; i < 13; i++) {
        sum += score5[i];
    }
    avg5 = sum / 13.0;

    // Step 3: Find the student with the highest average
    float best_avg = avg1;
    int best_name = 1;

    
    if (avg2 > best_avg) {
        best_avg = avg2;
        best_name = 2;
    }

    if (avg3 > best_avg) {
        best_avg = avg3;
        best_name = 3;
    }

    if (avg4 > best_avg) {
        best_avg = avg4;
        best_name = 4;
    }

    if (avg5 > best_avg) {
        best_avg = avg5;
        best_name = 5;
    }

    //Step 4 - print the best students name

    if (best_name == 1){
        printf("%s\n", name1);
    }
    if (best_name == 2){
        printf("%s\n", name2);
    }
    if (best_name == 3){
        printf("%s\n", name3);
    }
    if (best_name == 4){
        printf("%s\n", name4);
    }
    if (best_name == 5){
        printf("%s\n", name5);
    }
 

    // Step 5: Calculate the total class average
    float total_avg = (avg1 + avg2 + avg3 + avg4 + avg5) / 5.0;

    // Step 6: Print students with an average below the total class average
    if (avg1 < total_avg) {
        printf("%s\n", name1);
    }

    if (avg2 < total_avg) {
        printf("%s\n", name2);
    }

    if (avg3 < total_avg) {
        printf("%s\n", name3);
    }

    if (avg4 < total_avg) {
        printf("%s\n", name4);
    }

    if (avg5 < total_avg) {
        printf("%s\n", name5);
    }

    return 0;
}

/* ---- Solution ends here ------*/