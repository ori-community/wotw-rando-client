#pragma once

#include <Core/property.h>

#include <optional>
#include <string_view>

namespace randomizer::seed::items {
    class BaseItem {
    public:
        BaseItem();

        virtual ~BaseItem() {}
        virtual void grant() = 0;
        virtual std::string to_string() const = 0;

        core::Property<bool> stop;
        core::Property<uint32_t> skip;

        // Debug entries
        std::string seed_definition;
        int seed_line_number = 0;
    };

    inline BaseItem::BaseItem() {
        stop.set(false);
        skip.set(0u);
    }
} // namespace randomizer::seed::items
