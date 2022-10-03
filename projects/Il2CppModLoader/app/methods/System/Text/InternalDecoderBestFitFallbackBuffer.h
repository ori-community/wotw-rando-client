#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::InternalDecoderBestFitFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x02458200, app::Object*, get_InternalSyncObject, ())
    IL2CPP_REGISTER_METHOD(0x02458370, void, ctor, (app::InternalDecoderBestFitFallbackBuffer * this_ptr, app::InternalDecoderBestFitFallback* fallback))
    IL2CPP_REGISTER_METHOD(0x02458610, bool, Fallback, (app::InternalDecoderBestFitFallbackBuffer * this_ptr, app::Byte__Array* bytes_unknown, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02458660, uint16_t, GetNextChar, (app::InternalDecoderBestFitFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02458690, int32_t, get_Remaining, (app::InternalDecoderBestFitFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024586A0, void, Reset, (app::InternalDecoderBestFitFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, int32_t, InternalFallback, (app::InternalDecoderBestFitFallbackBuffer * this_ptr, app::Byte__Array* bytes, uint8_t* p_bytes))
    IL2CPP_REGISTER_METHOD(0x024586B0, uint16_t, TryBestFit, (app::InternalDecoderBestFitFallbackBuffer * this_ptr, app::Byte__Array* bytes_check))
} // namespace app::classes::System::Text::InternalDecoderBestFitFallbackBuffer
