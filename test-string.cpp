#include <stdio.h>
#include "string.h"

void t_true(bool result) {
    if (result) {
        printf("PASSED\n");
    } else {
        printf("FAILED\n");
    }
}
void t_false(bool result) {
    if (!result) {
        printf("PASSED\n");
    } else {
        printf("FAILED\n");
    }
}

void test_size() {
    printf("Test size (empty): ");
    t_true(new String()->size() == 0);

    printf("Test size (not empty): ");
    t_true(new String("Hello World")->size() == 11);
}

void test_concat() {
    printf("Test concat (w/ empty): ");
    String* str1 = new String("Hello");
    String* str2 = new String();
    String* result = str1->concat(str2);
    String* expected = new String("Hello");
    t_true(result->equals(expected) && result->size() == 5);

    printf("Test concat (w/o empty): ");
    String* str1 = new String("Hello");
    String* str2 = new String("World");
    String* result = str1->concat(str2);
    String* expected = new String("HelloWorld");
    t_true(result->equals(expected) && result->size() == 10);
}

void test_equals() {
    printf("Test equals: ");
    String* str1 = new String("Hello");
    String* str2 = new String("Hello");
    t_true(str1->equals(str2));
}

void test_hash() {
    printf("Test hash: ");
    String* str1 = new String("Hello");
    String* str2 = new String("Hello");
    t_true(str1->hash() == str2->hash());
}

int main() {
    test_size();
    test_concat();
    test_equals();
    test_hash();
    return(0);
}