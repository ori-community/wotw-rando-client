#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinHexDecoder.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>

namespace app::classes::System::Xml::BinHexDecoder {
    IL2CPP_REGISTER_METHOD(0x021E17F0, bool, get_IsFull, app::BinHexDecoder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021E1800, int32_t, Decode_1, app::BinHexDecoder* this_ptr, app::Char__Array* chars, int32_t start_pos, int32_t len)
    IL2CPP_REGISTER_METHOD(0x021E1A50, app::Byte__Array*, Decode_2, app::Char__Array* chars, bool allow_odd_chars)
    IL2CPP_REGISTER_METHOD(
        0x021E1C90,
        void,
        Decode_3,
        char16_t* p_chars,
        char16_t* p_chars_end_pos,
        uint8_t* p_bytes,
        uint8_t* p_bytes_end_pos,
        bool* has_half_byte_cached,
        uint8_t* cached_half_byte,
        int32_t* chars_decoded,
        int32_t* bytes_decoded
    )
} // namespace app::classes::System::Xml::BinHexDecoder
