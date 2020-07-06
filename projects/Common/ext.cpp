#include <ext.h>
#include <stdarg.h>
#include <stdio.h>
#include <vector>

const char* format(const char* str, ...)
{
    va_list args;
    va_start(args, str);
    auto ptr = format(str, args);
    va_end(args);
    return ptr;
}

static thread_local std::vector<char> buffer;
const char* format(const char* str, va_list ls)
{
    buffer.clear();
	size_t length = _vscprintf(str, ls);
    buffer.resize(length + 1);
    _vsnprintf_s(buffer.data(), length + 1, _TRUNCATE, str, ls);
	return buffer.data();
}
