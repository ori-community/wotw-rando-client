#pragma once

#include <Modloader/app/structs/Byte__Array.h>
#include <optional>
#include <string>
#include <vector>
#include <ranges>

namespace core::utils {
    template<bool is_const = false>
    struct ByteStreamImpl {
        using buffer_type = std::conditional_t<
            is_const,
            const std::vector<std::byte>,
            std::vector<std::byte>
        >;

        std::optional<buffer_type> internal_buffer = std::nullopt;
        buffer_type& buffer;
        size_t position = 0;

        ByteStreamImpl(): internal_buffer(std::vector<std::byte>{}), buffer(*internal_buffer) {}

        explicit ByteStreamImpl(buffer_type& buffer) : buffer(buffer) {}

        explicit ByteStreamImpl(const app::Byte__Array* buffer) : internal_buffer(
            std::vector(
                reinterpret_cast<const std::byte*>(buffer->vector),
                reinterpret_cast<const std::byte*>(buffer->vector) + sizeof(std::byte) * buffer->max_length
            )
        ), buffer(*internal_buffer) {}

        ByteStreamImpl(const ByteStreamImpl& other) = delete;
        ByteStreamImpl(ByteStreamImpl&& other) = delete;
        ByteStreamImpl& operator=(const ByteStreamImpl& other) = delete;
        ByteStreamImpl& operator=(ByteStreamImpl&& other) = delete;

        [[nodiscard]]
        bool available() const {
            return this->position < this->buffer.size();
        }

        std::ranges::subrange<typename buffer_type::const_iterator> peek_to_end() {
            return { this->buffer.cbegin() + this->position, this->buffer.cend() };
        }

        std::ranges::subrange<typename buffer_type::const_iterator> peek(const size_t length) {
            return { this->buffer.cbegin() + this->position, this->buffer.cbegin() + this->position + length };
        }

        buffer_type copy_to_end() {
            return { this->buffer.cbegin() + this->position, this->buffer.cend() };
        }

        buffer_type copy(const size_t length) {
            return { this->buffer.cbegin() + this->position, this->buffer.cbegin() + this->position + length };
        }

        template <typename T = std::byte>
        void write(T data) {
            this->write(reinterpret_cast<std::byte*>(&data), sizeof(T));
        }

        void write(const std::ranges::subrange<typename buffer_type::const_iterator>& data) {
            this->buffer.insert(this->buffer.end(), data.begin(), data.end());
        }

        void write_string(const std::string& string) {
            this->write(reinterpret_cast<const std::byte*>(string.data()), string.length());
        }

        void write_string_with_length(const std::string& string) {
            this->write(static_cast<uint64_t>(string.length()));
            this->write_string(string);
        }

        template <typename T = std::byte>
        const T& peek() const {
            return *reinterpret_cast<const T*>(&this->buffer[this->position]);
        }

        [[nodiscard]]
        std::string_view peek_string(const size_t length) const {
            return {reinterpret_cast<const char*>(&this->buffer[this->position]), length};
        }

        [[nodiscard]]
        std::string_view peek_with_length() const {
            return {reinterpret_cast<const char*>(&this->buffer[this->position + sizeof(uint64_t)]), peek<uint64_t>()};
        }

        template <typename T = std::byte>
        void skip() {
            this->position += sizeof(T);
        }

        template <typename T = std::byte>
        const T& read() {
            const auto& value = peek<T>();
            skip<T>();
            return value;
        }

        void skip(const size_t count) {
            this->position += count;
        }

        void write(const std::byte* data, const size_t length) {
            this->buffer.insert(this->buffer.end(), data, data + length);
        }

        void write(const buffer_type& data) {
            this->buffer.insert(this->buffer.end(), data.begin(), data.end());
        }

        void write(const buffer_type::iterator& data) {
            this->buffer.insert(this->buffer.end(), data.begin(), data.end());
        }

        void read(std::byte* source_buffer, const size_t length) {
            memcpy(source_buffer, this->buffer.data() + this->position, length);
            skip(length);
        }

        std::ranges::subrange<typename buffer_type::const_iterator> read(const size_t length) {
            const auto& value = peek(length);
            skip(length);
            return value;
        }

        buffer_type read_copied(const size_t length) {
            const auto& value = peek(length);
            skip(length);
            return buffer_type(value.begin(), value.end());
        }

        std::string_view read_string(const size_t length) {
            const auto value = peek_string(length);
            skip(length);
            return value;
        }

        std::string_view read_string_with_length() {
            return read_string(read<uint64_t>());
        }
    };

    using ByteStream = ByteStreamImpl<false>;
    using ConstByteStream = ByteStreamImpl<true>;
} // namespace utils
