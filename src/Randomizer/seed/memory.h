#pragma once
#include <vector>
#include <string>


namespace randomizer::seed::memory {
    constexpr int MEMORY_SLOT_DEFAULT_ALLOCATION_SIZE = 32;

    template <typename T>
    class MemorySlot {
    public:
        MemorySlot() {
            m_data.reserve(MEMORY_SLOT_DEFAULT_ALLOCATION_SIZE);
        }

        void clear() {
            m_data.clear();
        }

        void set(std::size_t index, const T& value) {
            allocate_up_to_index(index);
            m_data[index] = value;
        }

        void push(const T& value) {
            m_data.push_back(value);
        }

        T get(std::size_t index) const {
            if (index >= m_data.size()) {
                return T();
            }

            return m_data[index];
        }

    private:
        std::vector<T> m_data;

        void allocate_up_to_index(std::size_t size) {
            if (size >= m_data.size()) {
                m_data.resize(size + 1);
            }
        }
    };

    struct MemoryLayer {
        MemorySlot<bool> booleans;
        MemorySlot<int> integers;
        MemorySlot<float> floats;
        MemorySlot<std::string> strings;

        template<typename T>
        MemorySlot<T>& slot();

        template<typename T>
        const MemorySlot<T>& slot() const;

        template<typename T>
        void set(std::size_t index, const T& value) {
            slot<T>().set(index, value);
        }

        template<typename T>
        void push(const T& value) {
            slot<T>().push(value);
        }

        template<typename T>
        T get(std::size_t index) const {
            return slot<T>().get(index);
        }

        void clear();
    };

    template<>
    inline MemorySlot<bool>& MemoryLayer::slot<bool>() {
        return booleans;
    }

    template<>
    inline MemorySlot<int>& MemoryLayer::slot<int>() {
        return integers;
    }

    template<>
    inline MemorySlot<float>& MemoryLayer::slot<float>() {
        return floats;
    }

    template<>
    inline MemorySlot<std::string>& MemoryLayer::slot<std::string>() {
        return strings;
    }

    template<>
    inline const MemorySlot<bool>& MemoryLayer::slot<bool>() const {
        return booleans;
    }

    template<>
    inline const MemorySlot<int>& MemoryLayer::slot<int>() const {
        return integers;
    }

    template<>
    inline const MemorySlot<float>& MemoryLayer::slot<float>() const {
        return floats;
    }

    template<>
    inline const MemorySlot<std::string>& MemoryLayer::slot<std::string>() const {
        return strings;
    }

    struct Stack {
        std::vector<MemoryLayer> frames;
        std::size_t frame_pointer;

        void clear();
        MemoryLayer& current_frame();
        const MemoryLayer& current_frame() const;
        void push_frame();
        void pop_frame();
    };

    struct SeedMemory {
        MemoryLayer heap;
        Stack stack;

        void clear();
    };
}
