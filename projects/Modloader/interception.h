#pragma once

#include <Modloader/macros.h>

#include <string_view>

namespace modloader::interception {
    struct IL2CPP_MODLOADER_DLLEXPORT Binding {
        Binding(uint64_t address, void** ptr, std::string_view s);

        std::string_view name;
        uint64_t offset;
        void** pointer;
    };

    struct IL2CPP_MODLOADER_DLLEXPORT Intercept {
        Intercept(void** binding_ptr, void** original, void* intercepted, std::string_view name);

        std::string_view name;
        void** binding_pointer;
        void** original_pointer;
        void* intercept_pointer;
        int sort_order = 0;
    };

    void initialize();
    void detach();
} // namespace modloader::interception
