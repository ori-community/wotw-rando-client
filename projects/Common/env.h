#pragma once

#include <string>
#include <optional>
#include <Common/ext.h>

inline std::optional<std::string> get_environment_variable(const std::string_view& varname) {
    char* buf = nullptr;
    size_t sz = 0;
    if (_dupenv_s(&buf, &sz, varname.data()) != 0 || buf == nullptr) {
        throw std::runtime_error(std::format("Failed to get environment variable: {}", varname));
    }
    std::string result(buf, sz - 1);
    trim(result);
    free(buf);
    return result;
}
