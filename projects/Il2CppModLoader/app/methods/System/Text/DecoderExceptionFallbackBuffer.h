#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::DecoderExceptionFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x02448F70, bool, Fallback, (app::DecoderExceptionFallbackBuffer * this_ptr, app::Byte__Array* bytes_unknown, int32_t index))
    IL2CPP_REGISTER_METHOD(0x00420EE0, uint16_t, GetNextChar, (app::DecoderExceptionFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_Remaining, (app::DecoderExceptionFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02448F80, void, Throw, (app::DecoderExceptionFallbackBuffer * this_ptr, app::Byte__Array* bytes_unknown, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047381F0, DecoderExceptionFallbackBuffer_Throw__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DecoderExceptionFallbackBuffer * this_ptr))
} // namespace app::classes::System::Text::DecoderExceptionFallbackBuffer
