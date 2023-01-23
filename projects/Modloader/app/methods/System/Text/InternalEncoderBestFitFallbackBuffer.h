#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InternalEncoderBestFitFallbackBuffer.h>
#include <Modloader/app/structs/InternalEncoderBestFitFallback.h>

namespace app::classes::System::Text::InternalEncoderBestFitFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x02458BC0, app::Object*, get_InternalSyncObject, ())
    IL2CPP_REGISTER_METHOD(0x02458D30, void, ctor, (app::InternalEncoderBestFitFallbackBuffer * this_ptr, app::InternalEncoderBestFitFallback* fallback))
    IL2CPP_REGISTER_METHOD(0x02458FD0, bool, Fallback_1, (app::InternalEncoderBestFitFallbackBuffer * this_ptr, uint16_t char_unknown, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02459010, bool, Fallback_2, (app::InternalEncoderBestFitFallbackBuffer * this_ptr, uint16_t char_unknown_high, uint16_t char_unknown_low, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04752098, InternalEncoderBestFitFallbackBuffer_Fallback_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x024592D0, uint16_t, GetNextChar, (app::InternalEncoderBestFitFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02459300, bool, MovePrevious, (app::InternalEncoderBestFitFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02459320, int32_t, get_Remaining, (app::InternalEncoderBestFitFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02459330, void, Reset, (app::InternalEncoderBestFitFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02459350, uint16_t, TryBestFit, (app::InternalEncoderBestFitFallbackBuffer * this_ptr, uint16_t c_unknown))
} // namespace app::classes::System::Text::InternalEncoderBestFitFallbackBuffer
