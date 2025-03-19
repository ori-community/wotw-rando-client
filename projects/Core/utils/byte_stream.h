#pragma once

#include <string>
#include <vector>
#include <Core/macros.h>

#include <Modloader/app/structs/Byte__Array.h>

namespace utils {
    struct CORE_DLLEXPORT ByteStream {
        std::vector<std::byte> buffer;
        unsigned long position = 0;

        ByteStream();
        explicit ByteStream(const std::vector<std::byte>& buffer);
        explicit ByteStream(const app::Byte__Array* buffer);

        bool available() const;

        std::vector<std::byte> peek_to_end();

        std::vector<std::byte> peek(unsigned long length);

        template <typename T = std::byte>
        void write(T data) {
            this->write(reinterpret_cast<std::byte*>(&data), sizeof(T));
        }

        void write_string(const std::string& string) {
            this->write(reinterpret_cast<const std::byte*>(string.data()), string.length());
        }

        template <typename T = std::byte>
        T peek() {
            return *reinterpret_cast<T*>(&this->buffer[this->position]);
        }

        std::string peek_string(unsigned long length) {
            return {
                reinterpret_cast<const char*>(&this->buffer[this->position]),
                length
            };
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

        void read(std::byte* buffer, unsigned long length);

        std::vector<std::byte> read(unsigned long length);

        std::string read_string(unsigned long length) {
            auto value = peek_string(length);
            skip(length);
            return value;
        }

        void skip(unsigned long count);

        void write(const std::byte* data, unsigned long length);

        void write(const std::vector<std::byte>& data);
    };
} // namespace utils
