#include <ext.h>
#include <stdarg.h>
#include <stdio.h>

std::string format(const char* str, ...)
{
    va_list args;
    va_start(args, str);
    auto ptr = format(str, args);
    va_end(args);
    return ptr;
}

std::string format(const char* str, va_list ls)
{
	size_t length = _vscprintf(str, ls) + 1;
	std::string output;
    output.resize(length);
    _vsnprintf_s(&output[0], length, _TRUNCATE, str, ls);
	return output;
}
