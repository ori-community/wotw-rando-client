#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/DecoderNLS.h>
#include <Modloader/app/structs/Encoder.h>
#include <Modloader/app/structs/EncoderNLS.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UTF32Encoding.h>

namespace app::classes::System::Text::UTF32Encoding {
    IL2CPP_REGISTER_METHOD(0x027C77C0, void, ctor_1, app::UTF32Encoding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027C7800, void, ctor_2, app::UTF32Encoding* this_ptr, bool big_endian, bool byte_order_mark)
    IL2CPP_REGISTER_METHOD(0x027C7860, void, ctor_3, app::UTF32Encoding* this_ptr, bool big_endian, bool byte_order_mark, bool throw_on_invalid_characters)
    IL2CPP_REGISTER_METHOD(0x027C78E0, void, SetDefaultFallbacks, app::UTF32Encoding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027C7B30, int32_t, GetByteCount_1, app::UTF32Encoding* this_ptr, app::Char__Array* chars, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x027C7D00, int32_t, GetByteCount_2, app::UTF32Encoding* this_ptr, app::String* s)
    IL2CPP_REGISTER_METHOD(0x027C7DE0, int32_t, GetByteCount_3, app::UTF32Encoding* this_ptr, char16_t* chars, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x027C7F20,
        int32_t,
        GetBytes_1,
        app::UTF32Encoding* this_ptr,
        app::String* s,
        int32_t char_index,
        int32_t char_count,
        app::Byte__Array* bytes,
        int32_t byte_index
    )
    IL2CPP_REGISTER_METHOD(
        0x027C81B0,
        int32_t,
        GetBytes_2,
        app::UTF32Encoding* this_ptr,
        app::Char__Array* chars,
        int32_t char_index,
        int32_t char_count,
        app::Byte__Array* bytes,
        int32_t byte_index
    )
    IL2CPP_REGISTER_METHOD(
        0x027C8450,
        int32_t,
        GetBytes_3,
        app::UTF32Encoding* this_ptr,
        char16_t* chars,
        int32_t char_count,
        uint8_t* bytes,
        int32_t byte_count
    )
    IL2CPP_REGISTER_METHOD(0x027C85D0, int32_t, GetCharCount_1, app::UTF32Encoding* this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x027C87A0, int32_t, GetCharCount_2, app::UTF32Encoding* this_ptr, uint8_t* bytes, int32_t count)
    IL2CPP_REGISTER_METHOD(
        0x027C88E0,
        int32_t,
        GetChars_1,
        app::UTF32Encoding* this_ptr,
        app::Byte__Array* bytes,
        int32_t byte_index,
        int32_t byte_count,
        app::Char__Array* chars,
        int32_t char_index
    )
    IL2CPP_REGISTER_METHOD(
        0x027C8B80,
        int32_t,
        GetChars_2,
        app::UTF32Encoding* this_ptr,
        uint8_t* bytes,
        int32_t byte_count,
        char16_t* chars,
        int32_t char_count
    )
    IL2CPP_REGISTER_METHOD(0x027C8D00, app::String*, GetString, app::UTF32Encoding* this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x027C8ED0, int32_t, GetByteCount_4, app::UTF32Encoding* this_ptr, char16_t* chars, int32_t count, app::EncoderNLS* encoder)
    IL2CPP_REGISTER_METHOD(
        0x027C92C0,
        int32_t,
        GetBytes_4,
        app::UTF32Encoding* this_ptr,
        char16_t* chars,
        int32_t char_count,
        uint8_t* bytes,
        int32_t byte_count,
        app::EncoderNLS* encoder
    )
    IL2CPP_REGISTER_METHOD(0x027C98C0, int32_t, GetCharCount_3, app::UTF32Encoding* this_ptr, uint8_t* bytes, int32_t count, app::DecoderNLS* base_decoder)
    IL2CPP_REGISTER_METHOD(
        0x027C9D30,
        int32_t,
        GetChars_3,
        app::UTF32Encoding* this_ptr,
        uint8_t* bytes,
        int32_t byte_count,
        char16_t* chars,
        int32_t char_count,
        app::DecoderNLS* base_decoder
    )
    IL2CPP_REGISTER_METHOD(0x027CA360, uint32_t, GetSurrogate, app::UTF32Encoding* this_ptr, char16_t c_high, char16_t c_low)
    IL2CPP_REGISTER_METHOD(0x027CA380, char16_t, GetHighSurrogate, app::UTF32Encoding* this_ptr, uint32_t i_char)
    IL2CPP_REGISTER_METHOD(0x027CA3A0, char16_t, GetLowSurrogate, app::UTF32Encoding* this_ptr, uint32_t i_char)
    IL2CPP_REGISTER_METHOD(0x027CA3C0, app::Decoder*, GetDecoder, app::UTF32Encoding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027CA530, app::Encoder*, GetEncoder, app::UTF32Encoding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027CA6A0, int32_t, GetMaxByteCount, app::UTF32Encoding* this_ptr, int32_t char_count)
    IL2CPP_REGISTER_METHOD(0x027CA820, int32_t, GetMaxCharCount, app::UTF32Encoding* this_ptr, int32_t byte_count)
    IL2CPP_REGISTER_METHOD(0x027CA940, app::Byte__Array*, GetPreamble, app::UTF32Encoding* this_ptr)
    IL2CPP_REGISTER_METHOD(0x027CAAA0, bool, Equals, app::UTF32Encoding* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x027CABB0, int32_t, GetHashCode, app::UTF32Encoding* this_ptr)
} // namespace app::classes::System::Text::UTF32Encoding
