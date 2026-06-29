#pragma once

#include <string>
#include <vector>
#include <Core/macros.h>
#include <Modloader/app/structs/Byte__Array.h>

namespace core::utils {
    struct CORE_DLLEXPORT ByteStream {
        std::vector<std::byte> buffer;
        size_t position = 0;

        ByteStream();
        explicit ByteStream(const std::vector<std::byte>& buffer);
        explicit ByteStream(const app::Byte__Array* buffer);

        bool available() const;

        std::vector<std::byte> peek_to_end();

        std::vector<std::byte> peek(size_t length);

        template <typename T = std::byte>
        void write(T data) {
            this->write(reinterpret_cast<std::byte*>(&data), sizeof(T));
        }

        void write_string(const std::string& string) {
            this->write(reinterpret_cast<const std::byte*>(string.data()), string.length());
        }

        void write_string_with_length(const std::string& string) {
            this->write(static_cast<uint64_t>(string.length()));
            this->write_string(string);
        }

        template <typename T = std::byte>
        T peek() const {
            return *reinterpret_cast<const T*>(&this->buffer[this->position]);
        }

        std::string peek_string(size_t length) const {
            return {
                reinterpret_cast<const char*>(&this->buffer[this->position]),
                length
            };
        }

        std::string peek_with_length() const {
            return {
                reinterpret_cast<const char*>(&this->buffer[this->position + sizeof(uint64_t)]),
                peek<uint64_t>()
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

        void read(std::byte* buffer, size_t length);

        std::vector<std::byte> read(size_t length);

        std::string read_string(size_t length) {
            auto value = peek_string(length);
            skip(length);
            return value;
        }

        std::string read_string_with_length() {
            return read_string(read<uint64_t>());
        }

        void skip(size_t count);

        void write(const std::byte* data, size_t length);

        void write(const std::vector<std::byte>& data);
    };
} // namespace utils
