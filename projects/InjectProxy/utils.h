#pragma once

#include <windows.h>
#include <heapapi.h>

HANDLE h_heap;

template<typename R>
R memalloc(size_t size) {
    return reinterpret_cast<R>(HeapAlloc(h_heap, HEAP_GENERATE_EXCEPTIONS, size));
}

template<typename R>
R memcalloc(size_t size) {
    return reinterpret_cast<R>(HeapAlloc(h_heap, HEAP_ZERO_MEMORY, size));
}

void memfree(void* mem) {
    HeapFree(h_heap, 0, mem);
}

#define STR_LEN(str) (sizeof(str) / sizeof(str[0]))

void* memset(void* dst, char c, int n) {
    char* d = static_cast<char*>(dst);
    while (n--)
        *d = c;
    return dst;
}

inline void* memcpy(void* dst, const void* src, int n) {
    char* d = static_cast<char*>(dst);
    const char* s = static_cast<const char*>(src);
    while (n--)
        *d++ = *s++;
    return dst;
}

inline size_t wcslen(wchar_t const* str) {
    size_t result = 0;
    while (*str++)
        result++;
    return result;
}

inline size_t strlen(char const* str) {
    size_t result = 0;
    while (*str++)
        result++;
    return result;
}