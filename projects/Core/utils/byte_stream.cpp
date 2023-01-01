#include "byte_stream.h"

namespace utils {
    ByteStream::ByteStream() {}

    ByteStream::ByteStream(std::vector<std::byte> buffer) {
        this->buffer = buffer;
    }

    ByteStream::ByteStream(app::Byte__Array* buffer) {
        auto byte_array = reinterpret_cast<std::byte*>(buffer->vector);
        auto start = byte_array;
        auto end = start + sizeof(std::byte) * buffer->max_length;
        this->buffer = std::vector<std::byte>(start, end);
    }

    bool ByteStream::available() {
        return this->position < this->buffer.size();
    }

    std::vector<std::byte> ByteStream::peek_to_end() {
        return { this->buffer.begin() + this->position, this->buffer.end() };
    }

    void ByteStream::skip(unsigned long count) {
        this->position += count;
    }

    void ByteStream::write(std::byte* data, unsigned long length) {
        this->buffer.insert(this->buffer.end(), data, data + length);
    }

    void ByteStream::write(std::vector<std::byte> data) {
        this->buffer.insert(this->buffer.end(), data.begin(), data.end());
    }

    std::vector<std::byte> ByteStream::peek(unsigned long length) {
        return { this->buffer.begin() + this->position, this->buffer.begin() + this->position + length };
    }

    std::vector<std::byte> ByteStream::read(unsigned long length) {
        auto value = peek(length);
        skip(length);
        return value;
    }
} // namespace utils
