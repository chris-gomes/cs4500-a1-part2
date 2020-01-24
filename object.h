#pragma once

/**
 * Object: Generic object that all other objects inherit from.
 * Author: gomes.chri, modi.an
 */
class Object {
   public:

    /**
     * Creates an instance of Object.
     * @returns the object
     */
    Object();

    /**
     * Deconstructs an instance of Object.
     */
    virtual ~Object() {}

    /**
     * Hashes the object if not already stored.
     * @return the hashed value
     */
    virtual size_t hash();

    /**
     * Checks if this is equal to object given.
     * @arg o  object to compare
     * @return whether the two are equal
     */
    virtual bool equals(Object* o);
};