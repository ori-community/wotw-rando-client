#include <ext.h>
#include <stdio.h>

ImVec2 operator +(ImVec2 lhs, ImVec2 const& rhs)
{
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

ImVec2 operator *(ImVec2 lhs, float const& rhs)
{
    lhs.x *= rhs;
    lhs.y *= rhs;
    return lhs;
}

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
    static char buffer[256];
    vsnprintf_s(buffer, 256, str, ls);
    return buffer;
}