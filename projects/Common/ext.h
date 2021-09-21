#pragma once

#include <algorithm> 
#include <cctype>
#include <string>
#include <string_view>
#include <sstream>

// Calls to these methods are destructive to pointers returned previously.
const char* format(const char* str, ...);
const char* format(const char* str, va_list ls);

// trim from start (in place)
static inline std::string& ltrim(std::string& s) {
    s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](int ch) {
        return !std::isspace(ch);
    }));
    return s;
}

// trim from end (in place)
static inline std::string& rtrim(std::string& s) {
    s.erase(std::find_if(s.rbegin(), s.rend(), [](int ch) {
        return !std::isspace(ch);
    }).base(), s.end());
    return s;
}

// trim from both ends (in place)
static inline std::string& trim(std::string& s) {
    ltrim(s);
    rtrim(s);
    return s;
}

// trim from start (copying)
static inline std::string ltrim_copy(std::string s) {
    ltrim(s);
    return s;
}

// trim from end (copying)
static inline std::string rtrim_copy(std::string s) {
    rtrim(s);
    return s;
}

template <class Container>
void split_str(std::string const& str, Container& cont, char delim = ' ')
{
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim))
        cont.push_back(token);
}

void replace_all(std::string& str, std::string_view find, std::string_view replace);
void replace_all(std::wstring& str, std::wstring_view find, std::wstring_view replace);
std::wstring convert_string_to_wstring(std::string const& str);
std::string convert_wstring_to_string(std::wstring const& str);
