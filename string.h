#pragma once
#include <string.h>
#include "object.h"

/**
 * String: Represents a string of characters.
 * Authors: gomes.chri, modi.an
 */
class String : public Object {
   public:

    /**
     * Creates an instance of a String.
     * @return the string
     */
    String();

    /**
     * Creates an instance of a String for the given string literal.
     * @arg str  string literal to add
     * @return the string
     */
    String(const char* str);

    /**
     * Creates an instance of a String for the given String.
     * @arg str  String to add
     * @return the String
     */
    String(String* str);

    /**
     * Decontructs an instance of String.
     */
    ~String();

    /**
     * Returns the length of the String.
     * @return the length
     */
    size_t size();

    /**
     * Concats the given string to this string.
     * @arg s  string to add to the end of this string
     * @return the two strings concatted together
     */
    String* concat(String* s);

    /**
     * Checks if this string is equal to object given.
     * @arg o  object to compare
     * @return if the two are equal
     */
    bool equals(Object* o);

    /**
     * Hashes the string.
     * @return the hashed value
     */
    size_t hash();
};