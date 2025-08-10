#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/EncodingNLS.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Text::EncodingNLS {
    IL2CPP_REGISTER_METHOD(0x02455F00, void, ctor, app::EncodingNLS* this_ptr, int32_t code_page)
    IL2CPP_REGISTER_METHOD(0x02455F10, int32_t, GetByteCount_1, app::EncodingNLS* this_ptr, app::Char__Array* chars, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x024560E0, int32_t, GetByteCount_2, app::EncodingNLS* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x024561C0, int32_t, GetByteCount_3, app::EncodingNLS* this_ptr, char16_t* chars, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x02456300,
        int32_t,
        GetBytes_1,
        app::EncodingNLS* this_ptr,
        app::String* s,
        int32_t char_index,
        int32_t char_count,
        app::Byte__Array* bytes,
        int32_t byte_index
    )
    IL2CPP_REGISTER_METHOD(
        0x02456590,
        int32_t,
        GetBytes_2,
        app::EncodingNLS* this_ptr,
        app::Char__Array* chars,
        int32_t char_index,
        int32_t char_count,
        app::Byte__Array* bytes,
        int32_t byte_index
    )
    IL2CPP_REGISTER_METHOD(0x02456830, int32_t, GetBytes_3, app::EncodingNLS* this_ptr, char16_t* chars, int32_t char_count, uint8_t* bytes, int32_t byte_count)
    IL2CPP_REGISTER_METHOD(0x024569B0, int32_t, GetCharCount_1, app::EncodingNLS* this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x02456B80, int32_t, GetCharCount_2, app::EncodingNLS* this_ptr, uint8_t* bytes, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x02456CC0,
        int32_t,
        GetChars_1,
        app::EncodingNLS* this_ptr,
        app::Byte__Array* bytes,
        int32_t byte_index,
        int32_t byte_count,
        app::Char__Array* chars,
        int32_t char_index
    )
    IL2CPP_REGISTER_METHOD(0x02456F60, int32_t, GetChars_2, app::EncodingNLS* this_ptr, uint8_t* bytes, int32_t byte_count, char16_t* chars, int32_t char_count)
    IL2CPP_REGISTER_METHOD(0x024570E0, app::String*, GetString, app::EncodingNLS* this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x024572B0, app::Decoder*, GetDecoder, app::EncodingNLS* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02457420, app::Encoder*, GetEncoder, app::EncodingNLS* this_ptr)
} // namespace app::classes::System::Text::EncodingNLS
