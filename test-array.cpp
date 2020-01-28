#pragma once
#include <stdio.h>
#include "array.h"
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

void test_append() {
    printf("Test append: ");
    String* s = new String("Hello");
    String* t = new String("World");
    Array* l1 = new Array();
    l1->append(s);
    l1->append(t);
    t_true(l1->get(0)->equals(s) && l1->get(1)->equals(t) && l1->size() == 2);
}

void test_append_array() {
    printf("Test append (empty): ");
    String* s = new String("Hello");
    String* t = new String("World");
    Array* l1 = new Array();
    l1->append(s);
    l1->append(t);
    Array* l3 = new Array();
    l3->append(l1);
    t_true(l3->equals(l1));

    printf("Test append (not empty): ");
    Array* l2 = new Array();
    String* u = new String("Hi");
    String* v = new String("Mom");
    l2->append(u);
    l2->append(v);
    l1->append_array(l2);
    t_true(l1->get(2)->equals(u) && l1->get(3)->equals(v) && l1->size() == 4);
}

void test_add() {
    Array* l1 = new Array();
    String* s = new String("Hello");
    String* t = new String("World");
    String* u = new String("Hi");
    l1->append(s);
    l1->add(0, t);
    t_true(l1->get(0)->equals(t) && l1->get(1)->equals(s) && l1->size() == 2);
}

void test_clear() {
    printf("Test clear (not empty): ");
    String* s = new String("Hello");
    String* t = new String("World");
    Array* l1 = new Array();
    l1->append(s);
    l1->append(t);
    l1->clear();
    t_true(l1->size() == 0);

    printf("Test clear (empty): ");
    l1->clear();
    t_true(l1->size() == 0);
}

void test_get() {
    String* s = new String("Hello");
    String* t = new String("World");
    Array* l1 = new Array();
    l1->append(s);
    l1->append(t);

    printf("Test get (valid index): ");
    t_true(l1->get(1)->equals(t));

    printf("Test get (negative index): ");
    t_false(l1->get(-1)->equals(t));

    printf("Test get (too big index): ");
    t_false(l1->get(2)->equals(t));
}

void test_index_of() {
    String* s = new String("Hello");
    String* t = new String("World");
    Array* l1 = new Array();
    l1->append(s);
    l1->append(t);

    printf("Test index_of (in array): ");
    t_true(l1->index_of(new String("Hello")) == 0);

    printf("Test index_of (not in array): ");
    t_true(l1->index_of(new String("NotIn")) == -1);
}

void test_remove() {
    String* s = new String("Hello");
    String* t = new String("World");
    Array* l1 = new Array();
    l1->append(s);
    l1->append(t);

    printf("Test remove (valid index): ");
    t_true(l1->remove(0)->equals(s) && l1->size() == 1);

    printf("Test remove (negative index): ");
    t_true(l1->remove(-1)->equals(new String()) && l1->size() == 1);

    printf("Test remove (too big index): ");
    t_true(l1->remove(3)->equals(new String()) && l1->size() == 1);
}

void test_set() {
    String* s = new String("Hello");
    String* t = new String("World");
    String* u = new String("Hi");
    Array* l1 = new Array();
    l1->append(s);
    l1->append(t);

    printf("Test set (negative index): ");
    t_true(l1->set(-1, u)->equals(u));

    printf("Test set (too big index): ");
    t_true(l1->set(5, u)->equals(u));

    printf("Test set (valid index): ");
    t_true(l1->set(1, u)->equals(t) && l1->get(1)->equals(u));
}

void test_size() {
    String* s = new String("Hello");
    String* t = new String("World");
    String* u = new String("Hi");
    Array* l1 = new Array();

    printf("Test size (empty): ");
    t_true(l1->size() == 0);

    printf("Test size (not empty): ");
    l1->append(s);
    t_true(l1->size() == 1);
}

void test_hash() {
    String* s = new String("Hello");
    String* t = new String("World");
    Array* l1 = new Array();
    l1->append(s);
    l1->append(t);
    Array* l5 = new Array();
    l5->append(s);
    l5->append(t);

    printf("Test hash: ");
    t_true(l1->hash() == l5->hash());
}
