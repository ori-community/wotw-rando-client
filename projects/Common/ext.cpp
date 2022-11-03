#include <Common/ext.h>
#include <stdarg.h>
#include <stdio.h>
#include <vector>

// TODO: Change common to a dll so we can get rid of this macro pollution in the other projects.
#ifndef NOMINMAX
#define NOMINMAX
#endif

#ifndef STRICT
#define STRICT
#endif

#include <AtlBase.h>
#include <atlconv.h>

#undef MessageBox
#undef GetFont
#undef GetMessage

void replace_all(std::string& str, std::string_view find, std::string_view replace) {
    for (auto i = str.find(find); i != std::wstring_view::npos; i = str.find(find))
        str.replace(str.begin() + i, str.begin() + i + find.size(), replace);
}

void replace_all(std::wstring& str, std::wstring_view find, std::wstring_view replace) {
    for (auto i = str.find(find); i != std::wstring_view::npos; i = str.find(find))
        str.replace(str.begin() + i, str.begin() + i + find.size(), replace);
}

std::wstring convert_string_to_wstring(std::string_view str) {
    CA2W ca2w(str.data());
    return std::wstring(ca2w);
}

std::string convert_wstring_to_string(std::wstring_view str) {
    CW2A cw2a(str.data());
    return std::string(cw2a);
}

bool eps_equals(double a, double b, double eps) {
    return std::abs(a - b) < eps;
}

bool eps_equals(float a, float b, float eps) {
    return std::abs(a - b) < eps;
}
