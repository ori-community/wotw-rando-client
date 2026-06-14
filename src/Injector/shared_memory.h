#pragma once

#include <string_view>

namespace shared_memory {
    template<typename T>
    class SharedMemorySlot {
        void* shared_memory_handle = nullptr;
        volatile T* shared_memory_content = nullptr;

    public:
        explicit SharedMemorySlot(std::string_view name, bool read_only = false);
        void set_value(T value);
        T get_value();
        ~SharedMemorySlot();
    };
}
