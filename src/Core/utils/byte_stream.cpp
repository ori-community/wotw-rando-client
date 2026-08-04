#include "byte_stream.h"

namespace core::utils {
    ByteStream::ByteStream() = default;

    ByteStream::ByteStream(const std::vector<std::byte>& buffer) {
        this->buffer = buffer;
    }

    ByteStream::ByteStream(const app::Byte__Array* buffer) {
        const auto byte_array = reinterpret_cast<const std::byte*>(buffer->vector);
        const auto start = byte_array;
        const auto end = start + sizeof(std::byte) * buffer->max_length;
        this->buffer = std::vector<std::byte>(start, end);
    }

    bool ByteStream::available() const {
        return this->position < this->buffer.size();
    }

    std::vector<std::byte> ByteStream::peek_to_end() {
        return { this->buffer.begin() + this->position, this->buffer.end() };
    }

    void ByteStream::skip(const size_t count) {
        this->position += count;
    }

    void ByteStream::write(const std::byte* data, const size_t length) {
        this->buffer.insert(this->buffer.end(), data, data + length);
    }

    void ByteStream::write(const std::vector<std::byte>& data) {
        this->buffer.insert(this->buffer.end(), data.begin(), data.end());
    }

    std::vector<std::byte> ByteStream::peek(const size_t length) {
        return { this->buffer.begin() + this->position, this->buffer.begin() + this->position + length };
    }

    std::string ByteStream::peek_string(size_t length) const {
        return {reinterpret_cast<const char*>(&this->buffer[this->position]), length};
    }

    std::string ByteStream::peek_with_length() const {
        return {reinterpret_cast<const char*>(&this->buffer[this->position + sizeof(uint64_t)]), peek<uint64_t>()};
    }

    void ByteStream::read(std::byte* source_buffer, const size_t length) {
        memcpy(source_buffer, this->buffer.data() + this->position, length);
        skip(length);
    }

    std::vector<std::byte> ByteStream::read(const size_t length) {
        auto value = peek(length);
        skip(length);
        return value;
    }

    std::string ByteStream::read_string(size_t length) {
        auto value = peek_string(length);
        skip(length);
        return value;
    }

    std::string ByteStream::read_string_with_length() {
        return read_string(read<uint64_t>());
    }
} // namespace utils
