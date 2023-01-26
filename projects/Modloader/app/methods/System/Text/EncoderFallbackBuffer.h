#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EncoderFallbackBuffer.h>
#include <Modloader/app/structs/EncoderNLS.h>
#include <Modloader/app/structs/char16_t.h>

namespace app::classes::System::Text::EncoderFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x0244D220, void, Reset, (app::EncoderFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244D250, void, InternalReset, (app::EncoderFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244D270, void, InternalInitialize, (app::EncoderFallbackBuffer * this_ptr, char16_t* char_start, char16_t* char_end, app::EncoderNLS* encoder, bool set_encoder))
    IL2CPP_REGISTER_METHOD(0x0244D2A0, char16_t, InternalGetNextChar, (app::EncoderFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244D2E0, bool, InternalFallback, (app::EncoderFallbackBuffer * this_ptr, char16_t ch, app::char16_t** chars))
    IL2CPP_REGISTER_METHOD(0x0244D4F0, void, ThrowLastCharRecursive, (app::EncoderFallbackBuffer * this_ptr, int32_t char_recursive))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EncoderFallbackBuffer * this_ptr))
} // namespace app::classes::System::Text::EncoderFallbackBuffer
