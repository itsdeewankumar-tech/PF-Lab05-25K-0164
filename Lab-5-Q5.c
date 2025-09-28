#include <stdio.h>
int main() {
    int prerequisite;
    int course;

    printf("Enter the Prerequisite \n(Completed Prerequisite= 1, Missing Prerequisite= 0): ");
    scanf("%d", &prerequisite);

    printf("Enter the Course (Not full course= 0, Full Course= 1): ");
    scanf("%d", &course);

    if(prerequisite == 1 && course == 0) {
        printf("Enrolled successfully");
    }
    else if(prerequisite == 0 && course == 0) {
        printf("Cannot enroll: prerequisite missing");
    }
    else if(prerequisite == 1 && course == 1) {
        printf("Cannot enroll: course is full");
    }
    else {
        printf("Cannot enroll: prerequisite missing and course is full");
    }

    return 0;
}
m  
