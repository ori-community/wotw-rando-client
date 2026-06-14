#include <Injector/shared_memory.h>
#include <windows.h>

namespace shared_memory {
    constexpr int BUFFER_SIZE = 1;

    template<typename T>
    SharedMemorySlot<T>::SharedMemorySlot(std::string_view name, bool read_only) {
        shared_memory_handle = CreateFileMappingA(
            shared_memory_handle,
            nullptr,
            PAGE_READWRITE,
            0,
            sizeof(T),
            name.data()
        );

        if (shared_memory_handle == nullptr) {
            return;
        }

        shared_memory_content = (T*) MapViewOfFile(shared_memory_handle, read_only ? FILE_MAP_READ : FILE_MAP_ALL_ACCESS, 0, 0, sizeof(T));

        if (shared_memory_content == nullptr) {
            return;
        }
    }

    template <typename T>
    void SharedMemorySlot<T>::set_value(T value) {
        if (shared_memory_content != nullptr) {
            *shared_memory_content = value;
        }
    }

    template <typename T>
    T SharedMemorySlot<T>::get_value() {
        return *shared_memory_content;
    }

    template<typename T>
    SharedMemorySlot<T>::~SharedMemorySlot() {
        if (shared_memory_content != nullptr) {
            UnmapViewOfFile(shared_memory_handle);
            shared_memory_content = nullptr;
        }

        if (shared_memory_handle != nullptr) {
            CloseHandle(shared_memory_handle);
            shared_memory_handle = nullptr;
        }
    }

    // List all needed implementations here
    template class SharedMemorySlot<bool>;
}
