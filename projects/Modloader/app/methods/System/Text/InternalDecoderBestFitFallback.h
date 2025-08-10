#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DecoderFallbackBuffer.h>
#include <Modloader/app/structs/Encoding.h>
#include <Modloader/app/structs/InternalDecoderBestFitFallback.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Text::InternalDecoderBestFitFallback {
    IL2CPP_REGISTER_METHOD(0x02457F90, void, ctor, app::InternalDecoderBestFitFallback* this_ptr, app::Encoding* encoding)
    IL2CPP_REGISTER_METHOD(0x02457FB0, app::DecoderFallbackBuffer*, CreateFallbackBuffer, app::InternalDecoderBestFitFallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, get_MaxCharCount, app::InternalDecoderBestFitFallback* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02458100, bool, Equals, app::InternalDecoderBestFitFallback* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01F3F1A0, int32_t, GetHashCode, app::InternalDecoderBestFitFallback* this_ptr)
} // namespace app::classes::System::Text::InternalDecoderBestFitFallback
