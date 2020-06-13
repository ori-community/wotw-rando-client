#include <ext.h>
#include <stdarg.h>
#include <stdio.h>

const char* format(const char* str, ...)
{
    va_list args;
    va_start(args, str);
    const char* ptr = format(str, args);
    va_end(args);
    return ptr;
}

const char* format(const char* str, va_list ls)
{
    static char buffer[1024];
    vsnprintf_s(buffer, 1024, str, ls);
    return buffer;
}