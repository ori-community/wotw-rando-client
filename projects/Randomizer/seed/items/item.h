#pragma once

#include <Core/dynamic_value.h>

#include <optional>
#include <string_view>

namespace randomizer::seed::items {
    class BaseItem {
    public:
        BaseItem() {
            stop = false;
            skip = 0u;
        }

        virtual ~BaseItem() {}
        virtual void grant() = 0;
        virtual std::string to_string() const = 0;

        core::DynamicValue<bool> stop;
        core::DynamicValue<uint32_t> skip;

        // Debug entries
        std::string seed_definition;
        int seed_line_number;
    };
} // namespace randomizer::seed::items
