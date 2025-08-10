#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Net::WebHeaderCollection_HeaderEncoding {
    IL2CPP_REGISTER_METHOD(0x01D77690, app::String*, GetString_1, app::Byte__Array* bytes, int32_t byte_index, int32_t byte_count)
    IL2CPP_REGISTER_METHOD(0x01D776C0, app::String*, GetString_2, uint8_t* p_bytes, int32_t byte_count)
    IL2CPP_REGISTER_METHOD(0x01D77810, int32_t, GetByteCount, app::String* my_string)
    IL2CPP_REGISTER_METHOD(
        0x01D77830,
        void,
        GetBytes_1,
        app::String* my_string,
        int32_t char_index,
        int32_t char_count,
        app::Byte__Array* bytes,
        int32_t byte_index
    )
    IL2CPP_REGISTER_METHOD(0x01D778C0, app::Byte__Array*, GetBytes_2, app::String* my_string)
    IL2CPP_REGISTER_METHOD(0x01D779B0, app::String*, DecodeUtf8FromString, app::String* input)
} // namespace app::classes::System::Net::WebHeaderCollection_HeaderEncoding
