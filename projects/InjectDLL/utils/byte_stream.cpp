#include "byte_stream.h"

namespace utils {
    ByteStream::ByteStream() {}

    ByteStream::ByteStream(std::vector<std::byte> buffer) {
        this->buffer = buffer;
    }

    bool ByteStream::available() {
        return this->position < this->buffer.size();
    }

    std::vector<std::byte> ByteStream::peek_to_end() {
        return {this->buffer.begin() + this->position, this->buffer.end()};
    }

    void ByteStream::skip(unsigned long count) {
        this->position += count;
    }

    void ByteStream::write(std::byte* data, unsigned long length) {
        this->buffer.insert(this->buffer.end(), data, data + length);
    }
}
