#ifndef HASH_LIST_H
#define HASH_LIST_H

#include <optional>
#include <stddef.h>
#include <stdlib.h>

/** A single key/value pair in the linked list */
struct node
{
    /** The key the node is storing */
    int key;

    /** the value the node is storing */
    float value;

    /** a pointer to the next node */
    node *next;
};

/** A list that stores key/value pairs */
class hash_list
{

public:

    /** Create an empty list */
    hash_list();

    /** The copy constructor */
    hash_list(const hash_list &other);

    /** Assignment operator */
    hash_list &operator=(const hash_list &other);

    /**
     * Insert a node with the corresponding key value pair into the list.
     * If a node with the associated key already exists, update that node with the new value
     * instead of adding a new node to the list.
     */
    void insert(int key, float value);

    /**
     * Return an optional containing the value associated with the specified key. If the key
     * isn't in the list return an empty optional.
     */
    std::optional<float> get_value(int key) const;

    /**
     * Remove the node containing the specified key from the list and return true.
     * If the key isn't in the list return false.
     */
    bool remove(int key);

    /** Return the number of nodes in the list */
    size_t get_size() const;

    /** Free all memory associated with the nodes. This must not free the nodes recursively */
    ~hash_list();

    /**-----------------------------------------------------------------------------------
     * NOTE: Don't implement any of the functions below this comment. You'll implement them
     * in a future lab.
     *------------------------------------------------------------------------------------
     */

    /** 
     * Resets the iterator back to point to the first element in the list. If the list is 
     * empty then the iterator is set to NULL.
     */
    void reset_iter();

    /**
     * Moves the iterator to the next element. If the iterator points to the last element
     * of the list when this is called the iterator is set to NULL. If the iterator is NULL
     * when this function is called then this function does nothing
     */
    void increment_iter();

    /**
     * Return an optional that contains a pointer to the key and a pointer to the value
     * of the node pointed to by the iterator. If the iterator is NULL this returns
     * an empty optional
     */
    std::optional<std::pair<int *, float *>> get_iter_value();

    /** Returns true if the iterator is NULL */
    bool iter_at_end();

private:
    /** The number of nodes in the list */
    size_t size;

    /** A pointer to the first node in the list */
    node *head;

    /** The node that the iterator is currently pointing to */
    node *iter_ptr;
};

#endif
