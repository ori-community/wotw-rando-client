#pragma once

#include <Modloader/macros.h>

#include <optional>
#include <source_location>
#include <string_view>

namespace modloader::interception {
    struct IL2CPP_MODLOADER_DLLEXPORT Binding {
        Binding(uint64_t address, void** ptr, std::string_view s);

        std::string_view name;
        uint64_t offset;
        void** pointer;
    };

    struct IL2CPP_MODLOADER_DLLEXPORT Intercept {
        Intercept(void** binding_ptr, void** original, void* intercepted, std::string_view name, int order, std::source_location location = std::source_location::current());
        Intercept(void** binding_ptr, void** original, void* intercepted, std::string_view name, std::source_location location = std::source_location::current());

        std::string_view name;
        void** binding_pointer;
        void** original_pointer;
        void* intercept_pointer;

        /**
         * Sort order of this intercept. Usually used with the IL2CPP_INTERCEPT_WITH_ORDER macro.
         * Higher values will be intercepted later, so intercepts with lower values
         * will run before intercepts with higher values.
         * If no sort order is given, 0 is assumed.
         */
        std::optional<int> sort_order = std::nullopt;
        std::source_location location;
    };

    void initialize();
    void detach();
} // namespace modloader::interception
