#include "hash_list.h"

hash_list::hash_list() {}

hash_list::hash_list(const hash_list &other)
{
    size = 0;
    head = NULL;
}

hash_list &hash_list::operator=(const hash_list &other)
{
    size = 0;
    head = NULL;
    return *this;
}

void hash_list::insert(int key, float value) {}

std::optional<float> hash_list::get_value(int key) const {}

bool hash_list::remove(int key) {}

size_t hash_list::get_size() const {}

hash_list::~hash_list() {}

/** Dont modify this function for this lab. Leave it as is */
void hash_list::reset_iter() {}

/** Dont modify this function for this lab. Leave it as is */
void hash_list::increment_iter() {}

/** Dont modify this function for this lab. Leave it as is */
std::optional<std::pair<int *, float *>> hash_list::get_iter_value() {}

/** Dont modify this function for this lab. Leave it as is */
bool hash_list::iter_at_end() {}
