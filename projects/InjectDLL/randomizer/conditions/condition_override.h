#pragma once

#include <string_view>

namespace randomizer
{
    namespace conditions
    {
        using condition_intercept = bool(*)(std::string_view path, void* obj);
        void register_condition_intercept(std::string_view path, condition_intercept callback);
    }
}
