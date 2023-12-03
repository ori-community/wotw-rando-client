#include <Common/ext.h>
#include <stdarg.h>
#include <stdio.h>
#include <vector>

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

namespace common {
    std::optional<BooleanOperatorResult> parse_operator(std::string_view str) {
        BooleanOperatorResult result{};
        auto operator_start = std::string::npos;
        auto operator_end = std::string::npos;
        if ((operator_start = str.find(">=")) != std::string::npos) {
            result.op = BooleanOperator::GreaterOrEquals;
            operator_end = operator_start + 2;
        } else if ((operator_start = str.find("<=")) != std::string::npos) {
            result.op = BooleanOperator::LesserOrEquals;
            operator_end = operator_start + 2;
        } else if ((operator_start = str.find("==")) != std::string::npos) {
            result.op = BooleanOperator::Equals;
            operator_end = operator_start + 2;
        } else if ((operator_start = str.find("!=")) != std::string::npos) {
            result.op = BooleanOperator::NotEquals;
            operator_end = operator_start + 2;
        } else if ((operator_start = str.find('=')) != std::string::npos) {
            result.op = BooleanOperator::Equals;
            operator_end = operator_start + 1;
        } else if ((operator_start = str.find('>')) != std::string::npos) {
            result.op = BooleanOperator::Greater;
            operator_end = operator_start + 1;
        } else if ((operator_start = str.find('<')) != std::string::npos) {
            result.op = BooleanOperator::Lesser;
            operator_end = operator_start + 1;
        } else {
            return std::nullopt;
        }

        result.prefix = trim_copy(str.substr(0, operator_start));
        result.suffix = trim_copy(str.substr(operator_end));
        return result;
    }
} // namespace common

std::string_view find_next_unbalanced(std::string_view text, std::string_view start, std::string_view end) {
    auto walker = text;
    int depth = 1;
    int size = 0;
    while (!walker.empty()) {
        if (walker.starts_with(start)) {
            ++depth;
            walker.remove_prefix(start.size());
            size += static_cast<int>(start.size());
        } else if (walker.starts_with(end)) {
            --depth;
            if (depth == 0) {
                break;
            }

            walker.remove_prefix(end.size());
            size += static_cast<int>(end.size());
        } else {
            walker.remove_prefix(1);
            ++size;
        }
    }

    return text.substr(0, size);
}

void replace_all(std::string& str, std::string_view find, std::string_view replace) {
    for (auto i = str.find(find); i != std::wstring_view::npos; i = str.find(find)) {
        str.replace(str.begin() + i, str.begin() + i + find.size(), replace);
    }
}

void replace_all(std::wstring& str, std::wstring_view find, std::wstring_view replace) {
    for (auto i = str.find(find); i != std::wstring_view::npos; i = str.find(find)) {
        str.replace(str.begin() + i, str.begin() + i + find.size(), replace);
    }
}

std::wstring convert_string_to_wstring(std::string_view str) {
    CA2W ca2w(str.data());
    return { ca2w };
}

std::string convert_wstring_to_string(std::wstring_view str) {
    CW2A cw2a(str.data());
    return { cw2a };
}

bool eps_equals(double a, double b, double eps) {
    return std::abs(a - b) < eps;
}

bool eps_equals(float a, float b, float eps) {
    return std::abs(a - b) < eps;
}

bool is_bool(std::string_view str, bool& value) {
    if (str == "true" || str == "True") {
        value = true;
    } else if (str == "false" || str == "False") {
        value = false;
    } else {
        return false;
    }

    return true;
}

template <>
bool string_convert(std::string_view str, int& value, std::size_t* position) {
    try {
        str = trim_copy(str);
        bool bool_value = false;
        if (is_bool(str, bool_value)) {
            value = static_cast<int>(bool_value);
            return true;
        }

        std::size_t conversion_position;
        value = std::stoi(std::string(str), &conversion_position, 10);
        if (position != nullptr) {
            *position = conversion_position;
        }

        return str.size() == conversion_position;
    } catch (const std::invalid_argument& ia) {
        return false;
    } catch (const std::out_of_range& oor) {
        return false;
    } catch (const std::exception& e) {
        return false;
    }
}

template <>
bool string_convert(std::string_view str, float& value, std::size_t* position) {
    try {
        str = trim_copy(str);
        bool bool_value = false;
        if (is_bool(str, bool_value)) {
            value = static_cast<float>(bool_value);
            return true;
        }

        std::size_t conversion_position;
        value = std::stof(std::string(str), &conversion_position);
        if (position != nullptr) {
            *position = conversion_position;
        }

        return str.size() == conversion_position;
    } catch (const std::invalid_argument& ia) {
        return false;
    } catch (const std::out_of_range& oor) {
        return false;
    } catch (const std::exception& e) {
        return false;
    }
}

template <>
bool string_convert(std::string_view str, double& value, std::size_t* position) {
    try {
        str = trim_copy(str);
        bool bool_value = false;
        if (is_bool(str, bool_value)) {
            value = static_cast<double>(bool_value);
            return true;
        }

        std::size_t conversion_position;
        value = std::stod(std::string(str), &conversion_position);
        if (position != nullptr) {
            *position = conversion_position;
        }

        return str.size() == conversion_position;
    } catch (const std::invalid_argument& ia) {
        return false;
    } catch (const std::out_of_range& oor) {
        return false;
    } catch (const std::exception& e) {
        return false;
    }
}

template <>
bool string_convert(std::string_view str, bool& value, std::size_t* position) {
    try {
        str = trim_copy(str);
        if (is_bool(str, value)) {
            return true;
        }

        std::size_t conversion_position;
        int v = std::stoi(std::string(str), &conversion_position);
        if (position != nullptr) {
            *position = conversion_position;
        }

        value = v > 0;
        return str.size() == conversion_position;
    } catch (const std::invalid_argument& ia) {
        return false;
    } catch (const std::out_of_range& oor) {
        return false;
    } catch (const std::exception& e) {
        return false;
    }
}
