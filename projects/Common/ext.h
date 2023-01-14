#pragma once

#include <fmt/format.h>
#include <algorithm>
#include <array>
#include <cctype>
#include <optional>
#include <sstream>
#include <string>
#include <string_view>
#include <tuple>

enum class BooleanOperator {
    GreaterOrEquals,
    LesserOrEquals,
    Equals,
    NotEquals,
    Greater,
    Lesser
};

struct BooleanOperatorResult {
    BooleanOperator op;
    std::string_view prefix;
    std::string_view suffix;
};

namespace common {
    std::optional<BooleanOperatorResult> parse_operator(std::string_view str);

    template <typename A, typename B>
    bool resolve_operator(A a, B b, BooleanOperator op) {
        switch (op) {
            case BooleanOperator::GreaterOrEquals:
                return a >= b;
            case BooleanOperator::LesserOrEquals:
                return a <= b;
            case BooleanOperator::Equals:
                return a == b;
            case BooleanOperator::NotEquals:
                return a != b;
            case BooleanOperator::Greater:
                return a > b;
            case BooleanOperator::Lesser:
                return a < b;
        }
    }
}

struct pair_hash { // NOLINT
    template <class T1, class T2>
    std::size_t operator()(const std::pair<T1, T2>& pair) const {
        return std::hash<T1>()(pair.first) ^ std::hash<T2>()(pair.second);
    }
};

struct array_hash { // NOLINT
    template <typename T, int N>
    std::size_t operator()(const std::array<T, N>& arr) const {
        static_assert(N > 0);
        auto hasher = std::hash<T>();
        auto hash = arr[0];
        for (int i = 1; i < N; ++i) {
            hash ^= hasher(arr[i]);
        }

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

static inline std::string_view ltrim(std::string_view s) {
    while (!s.empty() && std::isspace(s.front())) {
        s.remove_prefix(1);
    }

    return s;
}

static inline std::string_view rtrim(std::string_view s) {
    while (!s.empty() && std::isspace(s.back())) {
        s.remove_suffix(1);
    }

    return s;
}

static inline std::string_view trim(std::string_view s) {
    s = ltrim(s);
    s = rtrim(s);
    return s;
}

template <class Container>
void split_str(std::string_view str, Container& cont, char delim = ' ') {
    std::stringstream ss(std::string{ str });
    std::string token;
    while (std::getline(ss, token, delim)) {
        cont.push_back(token);
    }
}

std::string_view find_next_unbalanced(std::string_view text, std::string_view start, std::string_view end);

template <typename T>
bool string_convert(std::string_view str, T& value, std::size_t* position = nullptr);

template <>
bool string_convert(std::string_view str, int& value, std::size_t* position);

template <>
bool string_convert(std::string_view str, float& value, std::size_t* position);

template <>
bool string_convert(std::string_view str, double& value, std::size_t* position);

void replace_all(std::string& str, std::string_view find, std::string_view replace);
void replace_all(std::wstring& str, std::wstring_view find, std::wstring_view replace);
std::wstring convert_string_to_wstring(std::string_view str);
std::string convert_wstring_to_string(std::wstring_view str);

bool eps_equals(double a, double b, double eps = 0.001);
bool eps_equals(float a, float b, float eps = 0.001f);

namespace {
    template <class T>
    inline void hash_combine(std::size_t& seed, T const& v) {
        seed ^= std::hash<T>()(v) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
    }

    template <class Tuple, size_t Index = std::tuple_size<Tuple>::value - 1>
    struct HashValueImpl {
        static void apply(size_t& seed, Tuple const& tuple) {
            HashValueImpl<Tuple, Index - 1>::apply(seed, tuple);
            hash_combine(seed, std::get<Index>(tuple));
        }
    };

    template <class Tuple>
    struct HashValueImpl<Tuple, 0> {
        static void apply(size_t& seed, Tuple const& tuple) {
            hash_combine(seed, std::get<0>(tuple));
        }
    };
} // namespace

template <typename... TT>
struct std::hash<std::tuple<TT...>> {
    size_t
    operator()(std::tuple<TT...> const& tt) const {
        size_t seed = 0;
        HashValueImpl<std::tuple<TT...>>::apply(seed, tt);
        return seed;
    }
};
