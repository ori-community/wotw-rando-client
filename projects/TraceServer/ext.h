#include <gui/imgui.h>

ImVec2 operator +(ImVec2 lhs, ImVec2 const& rhs);
ImVec2 operator *(ImVec2 lhs, float const& rhs);
const char* format(const char* str, ...);
const char* format(const char* str, va_list ls);
