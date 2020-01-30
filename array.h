#pragma once
#include <stdio.h>
#include "object.h"

/**
 * Array: Represents a resizeable array.
 * Author: gomes.chri, modi.an
 */
class Array : public Object {
   public:

    /**
     * Creates an empty array.
     * @return the array
     */
    Array() : Object() {}

    /**
     * Deconstructs an instance of array.
     */
    ~Array();

    /**
     * Adds an element to the end the array.
     * @arg e  element to add
     */
    void append(Object* e);

    /**
     * Concats another array onto the end of this array.
     * @arg c  array to concat
     */
    void append_array(Array* c);

    /**
     * Adds an item at a specific index in the Array
     * @arg i  position to add the new item
     * @arg o  the new item
     */
    void add(size_t i, Object* o);

    /**
     * Removes all elements from the array.
     */
    void clear();

    /**
     * Checks if this array is equal to object given.
     * @arg o  object to compare
     * @return whether the two are equal
     */
    bool equals(Object* o);

    /**
     * Gets the element at a given index.
     * @arg index  index of the element to get
     * @return element at the index
     */
    Object* get(size_t index);

    /**
     * Gets the index of the element given. If not in list,
     * returns size + 1.
     * @arg o  element to find in the list
     * @return index of the element if found
     */
    size_t index_of(Object* o);

    /**
     * Removes the element at the given index. If invalid index,
     * does nothing and returns a null pointer.
     * @arg i  index to remove from
     * @return removed element
     */
    Object* remove(size_t i);

    /**
     * Replaces the element at the index with given one. If
     * invalid index, does nothing and returns given element.
     * @arg i  index to replace the element at
     * @arg e  element to replace with
     * @return replaced element
     */
    Object* set(size_t i, Object* e);

    /**
     * Gets the size of the array.
     * @return the size
     */
    size_t size();

    /**
     * Hashes the array.
     * @return the hashed value
     */
    size_t hash();
};

/**
 * Array: Represents a resizeable int array.
 * Author: gomes.chri, modi.an
 */
class IntArray : public Object {
   public:

    /**
     * Creates an empty array.
     * @return the array
     */
    IntArray() : Object() {}

    /**
     * Deconstructs an instance of array.
     */
    ~IntArray();

    /**
     * Adds an element to the end the array.
     * @arg e  element to add
     */
    void append(int e);

    /**
     * Concats another array onto the end of this array.
     * @arg c  array to concat
     */
    void append_array(IntArray* c);

    /**
     * Adds an item at a specific index in the Array
     * @arg i  position to add the new item
     * @arg o  the new item
     */
    void add(size_t i, int o);

    /**
     * Removes all elements from the array.
     */
    void clear();

    /**
     * Checks if this array is equal to object given.
     * @arg o  object to compare
     * @return whether the two are equal
     */
    bool equals(Object* o);

    /**
     * Gets the element at a given index.
     * @arg index  index of the element to get
     * @return element at the index
     */
    int get(size_t index);

    /**
     * Gets the index of the element given. If not in list,
     * returns size + 1.
     * @arg o  element to find in the list
     * @return index of the element if found
     */
    size_t index_of(int o);

    /**
     * Removes the element at the given index. If invalid index,
     * does nothing and returns a null pointer.
     * @arg i  index to remove from
     * @return removed element
     */
    int remove(size_t i);

    /**
     * Replaces the element at the index with given one. If
     * invalid index, does nothing and returns given element.
     * @arg i  index to replace the element at
     * @arg e  element to replace with
     * @return replaced element
     */
    int set(size_t i, int e);

    /**
     * Gets the size of the array.
     * @return the size
     */
    size_t size();

    /**
     * Hashes the array.
     * @return the hashed value
     */
    size_t hash();
};

/**
 * Array: Represents a resizeable float array.
 * Author: gomes.chri, modi.an
 */
class FloatArray : public Object {
   public:

    /**
     * Creates an empty array.
     * @return the array
     */
    FloatArray() : Object() {}

    /**
     * Deconstructs an instance of array.
     */
    ~FloatArray();

    /**
     * Adds an element to the end the array.
     * @arg e  element to add
     */
    void append(float e);

    /**
     * Concats another array onto the end of this array.
     * @arg c  array to concat
     */
    void append_array(FloatArray* c);

    /**
     * Adds an item at a specific index in the Array
     * @arg i  position to add the new item
     * @arg o  the new item
     */
    void add(size_t i, float o);

    /**
     * Removes all elements from the array.
     */
    void clear();

    /**
     * Checks if this array is equal to object given.
     * @arg o  object to compare
     * @return whether the two are equal
     */
    bool equals(Object* o);

    /**
     * Gets the element at a given index.
     * @arg index  index of the element to get
     * @return element at the index
     */
    float get(size_t index);

    /**
     * Gets the index of the element given. If not in list,
     * returns size + 1.
     * @arg o  element to find in the list
     * @return index of the element if found
     */
    size_t index_of(float o);

    /**
     * Removes the element at the given index. If invalid index,
     * does nothing and returns a null pointer.
     * @arg i  index to remove from
     * @return removed element
     */
    float remove(size_t i);

    /**
     * Replaces the element at the index with given one. If
     * invalid index, does nothing and returns given element.
     * @arg i  index to replace the element at
     * @arg e  element to replace with
     * @return replaced element
     */
    float set(size_t i, float e);

    /**
     * Gets the size of the array.
     * @return the size
     */
    size_t size();

    /**
     * Hashes the array.
     * @return the hashed value
     */
    size_t hash();
};

/**
 * Array: Represents a resizeable bool array.
 * Author: gomes.chri, modi.an
 */
class BoolArray : public Object {
   public:

    /**
     * Creates an empty array.
     * @return the array
     */
    BoolArray() : Object() {}

    /**
     * Deconstructs an instance of array.
     */
    ~BoolArray();

    /**
     * Adds an element to the end the array.
     * @arg e  element to add
     */
    void append(bool e);

    /**
     * Concats another array onto the end of this array.
     * @arg c  array to concat
     */
    void append_array(BoolArray* c);

    /**
     * Adds an item at a specific index in the Array
     * @arg i  position to add the new item
     * @arg o  the new item
     */
    void add(size_t i, bool o);

    /**
     * Removes all elements from the array.
     */
    void clear();

    /**
     * Checks if this array is equal to object given.
     * @arg o  object to compare
     * @return whether the two are equal
     */
    bool equals(Object* o);

    /**
     * Gets the element at a given index.
     * @arg index  index of the element to get
     * @return element at the index
     */
    bool get(size_t index);

    /**
     * Gets the index of the element given. If not in list,
     * returns size + 1.
     * @arg o  element to find in the list
     * @return index of the element if found
     */
    size_t index_of(bool o);

    /**
     * Removes the element at the given index. If invalid index,
     * does nothing and returns a null pointer.
     * @arg i  index to remove from
     * @return removed element
     */
    bool remove(size_t i);

    /**
     * Replaces the element at the index with given one. If
     * invalid index, does nothing and returns given element.
     * @arg i  index to replace the element at
     * @arg e  element to replace with
     * @return replaced element
     */
    bool set(size_t i, bool e);

    /**
     * Gets the size of the array.
     * @return the size
     */
    size_t size();

    /**
     * Hashes the array.
     * @return the hashed value
     */
    size_t hash();
};
