#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EncoderExceptionFallbackBuffer.h>

namespace app::classes::System::Text::EncoderExceptionFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::EncoderExceptionFallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0244C670, bool, Fallback_1, app::EncoderExceptionFallbackBuffer* this_ptr, char16_t char_unknown, int32_t index)
    IL2CPP_REGISTER_METHOD(
        0x0244C780,
        bool,
        Fallback_2,
        app::EncoderExceptionFallbackBuffer* this_ptr,
        char16_t char_unknown_high,
        char16_t char_unknown_low,
        int32_t index
    )
    IL2CPP_REGISTER_METHOD(0x00420EE0, char16_t, GetNextChar, app::EncoderExceptionFallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, MovePrevious, app::EncoderExceptionFallbackBuffer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Remaining, app::EncoderExceptionFallbackBuffer* this_ptr)
} // namespace app::classes::System::Text::EncoderExceptionFallbackBuffer
