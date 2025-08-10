#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EncoderFallbackBuffer.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/InternalEncoderBestFitFallback.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Text::InternalEncoderBestFitFallback {
    IL2CPP_REGISTER_METHOD(0x02458940, void, ctor, app::InternalEncoderBestFitFallback* this_ptr, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x02458950, app::EncoderFallbackBuffer*, CreateFallbackBuffer, app::InternalEncoderBestFitFallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_MaxCharCount, app::InternalEncoderBestFitFallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02458AA0, bool, Equals, app::InternalEncoderBestFitFallback* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F3F1A0, int32_t, GetHashCode, app::InternalEncoderBestFitFallback* this_ptr)
} // namespace app::classes::System::Text::InternalEncoderBestFitFallback
