#pragma once
#include <stdio.h>
#include "Object.h"

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
    Array();

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
     * returns a -1.
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
