#pragma once

#include <fmt/format.h>
#include <algorithm>
#include <array>
#include <cctype>
#include <sstream>
#include <string>
#include <string_view>

struct pair_hash {
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2>& pair) const {
        return std::hash<T1>()(pair.first) ^ std::hash<T2>()(pair.second);
    }
};

struct array_hash {
    template <typename T, int N>
    std::size_t operator()(const std::array<T, N>& arr) const {
        static_assert(N > 0);
        auto hasher = std::hash<T>();
        auto hash = arr[0];
        for (int i = 1; i < N; ++i)
            hash ^= hasher(arr[i]);

        return hash;
    }
};

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
            }).base(),
            s.end());
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
void split_str(std::string str, Container& cont, char delim = ' ') {
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim))
        cont.push_back(token);
}

void replace_all(std::string& str, std::string_view find, std::string_view replace);
void replace_all(std::wstring& str, std::wstring_view find, std::wstring_view replace);
std::wstring convert_string_to_wstring(std::string_view str);
std::string convert_wstring_to_string(std::wstring_view str);

bool eps_equals(double a, double b, double eps = 0.001);
bool eps_equals(float a, float b, float eps = 0.001f);
