#pragma once

#include <vector>

namespace utils {
    struct ByteStream {
        std::vector<std::byte> buffer;
        unsigned long position = 0;

        ByteStream();
        explicit ByteStream(std::vector<std::byte> buffer);

        bool available();

        std::vector<std::byte> peek_to_end();

        template <typename T = std::byte>
        void write(T data) {
            this->write(reinterpret_cast<std::byte*>(&data), sizeof(T));
        }

        template <typename T = std::byte>
        T peek() {
            return *reinterpret_cast<T*>(&this->buffer[this->position]);
        }

        template <typename T = std::byte>
        void skip() {
            this->position += sizeof(T);
        }

        template <typename T = std::byte>
        T read() {
            auto value = peek<T>();
            skip<T>();
            return value;
        }

        void skip(unsigned long count);

        void write(std::byte* data, unsigned long length);
    };
}
