#pragma once

#include <Modloader/macros.h>

#include <string_view>

namespace modloader::interception {
    struct IL2CPP_MODLOADER_DLLEXPORT binding {
        binding(uint64_t address, void** ptr, std::string_view s);

        int type;
        std::string_view name;
        uint64_t offset;
        void** pointer;
        binding* next;
        binding* prev;
    };

    struct IL2CPP_MODLOADER_DLLEXPORT intercept {
        intercept(void** binding_ptr, void** original, void* intercepted, std::string_view s);

        int type;
        std::string_view name;
        void** binding_pointer;
        void** original_pointer;
        void* intercept_pointer;
        intercept* next;
        intercept* prev;
    };

    void interception_init();
    void interception_detach();
} // namespace modloader::interception
