#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/UTF16Decoder.h>

namespace app::classes::System::Xml::UTF16Decoder {
    IL2CPP_REGISTER_METHOD(0x019509A0, void, ctor, app::UTF16Decoder* this_ptr, bool big_endian)
    IL2CPP_REGISTER_METHOD(0x019509B0, int32_t, GetCharCount_1, app::UTF16Decoder* this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count)
    IL2CPP_REGISTER_METHOD(0x019509E0, int32_t, GetCharCount_2, app::UTF16Decoder* this_ptr, app::Byte__Array* bytes, int32_t index, int32_t count, bool flush)
    IL2CPP_REGISTER_METHOD(
        0x01950B10,
        int32_t,
        GetChars,
        app::UTF16Decoder* this_ptr,
        app::Byte__Array* bytes,
        int32_t byte_index,
        int32_t byte_count,
        app::Char__Array* chars,
        int32_t char_index
    )
    IL2CPP_REGISTER_METHOD(
        0x01950E90,
        void,
        Convert,
        app::UTF16Decoder* this_ptr,
        app::Byte__Array* bytes,
        int32_t byte_index,
        int32_t byte_count,
        app::Char__Array* chars,
        int32_t char_index,
        int32_t char_count,
        bool flush,
        int32_t* bytes_used,
        int32_t* chars_used,
        bool* completed
    )
} // namespace app::classes::System::Xml::UTF16Decoder
