#include "byte_stream.h"

namespace core::utils {
    ByteStream::ByteStream() {}

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

    void ByteStream::skip(const unsigned long count) {
        this->position += count;
    }

    void ByteStream::write(const std::byte* data, const unsigned long length) {
        this->buffer.insert(this->buffer.end(), data, data + length);
    }

    void ByteStream::write(const std::vector<std::byte>& data) {
        this->buffer.insert(this->buffer.end(), data.begin(), data.end());
    }

    std::vector<std::byte> ByteStream::peek(const unsigned long length) {
        return { this->buffer.begin() + this->position, this->buffer.begin() + this->position + length };
    }

    void ByteStream::read(std::byte* buffer, const unsigned long length) {
        memcpy(buffer, this->buffer.data() + this->position, length);
        skip(length);
    }

    std::vector<std::byte> ByteStream::read(const unsigned long length) {
        auto value = peek(length);
        skip(length);
        return value;
    }
} // namespace utils
