#pragma once

#include <string>

namespace network
{
    namespace binary
    {
        struct BinaryWalker
        {
            int cursor;
            int size;
            char* data;
        };

        template<typename T>
        T& read_bw(BinaryWalker& walker)
        {
            //assert(walker.cursor + sizeof(T) > walker.size);

            T& data = *reinterpret_cast<T*>(walker.data + walker.cursor);
            walker.cursor += sizeof(T);
            return data;
        }

        template<typename T>
        void write_bw(BinaryWalker& walker, T const& value)
        {
            if (walker.cursor + sizeof(T) > walker.size)
                return;

            auto data = walker.data + walker.cursor;
            memcpy_s(data, walker.size - walker.cursor, reinterpret_cast<char const*>(&value), sizeof(T));
            walker.cursor += sizeof(T);
        }

        int read_bw_data(BinaryWalker& walker, char* buffer, int size);
        int write_bw_data(BinaryWalker& walker, const char* buffer, int size);

        std::string read_str_bw(BinaryWalker& walker);
        void write_str_bw(BinaryWalker& walker, std::string const& str);
    }
}

