#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharEntityEncoderFallback.h>
#include <Modloader/app/structs/CharEntityEncoderFallbackBuffer.h>

namespace app::classes::System::Xml::CharEntityEncoderFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x021E8320, void, ctor, app::CharEntityEncoderFallbackBuffer* this_ptr, app::CharEntityEncoderFallback* parent)
    IL2CPP_REGISTER_METHOD(0x021E83C0, bool, Fallback_1, app::CharEntityEncoderFallbackBuffer* this_ptr, char16_t char_unknown, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x021E87D0,
        bool,
        Fallback_2,
        app::CharEntityEncoderFallbackBuffer* this_ptr,
        char16_t char_unknown_high,
        char16_t char_unknown_low,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x021E8C50, char16_t, GetNextChar, app::CharEntityEncoderFallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021E8CA0, bool, MovePrevious, app::CharEntityEncoderFallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021E8CC0, int32_t, get_Remaining, app::CharEntityEncoderFallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x021E8CF0, void, Reset, app::CharEntityEncoderFallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x021E8D00,
        int32_t,
        SurrogateCharToUtf32,
        app::CharEntityEncoderFallbackBuffer* this_ptr,
        char16_t high_surrogate,
        char16_t low_surrogate
    )
} // namespace app::classes::System::Xml::CharEntityEncoderFallbackBuffer
