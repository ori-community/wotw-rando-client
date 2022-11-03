#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::DecoderFallbackBuffer {
    IL2CPP_REGISTER_METHOD(0x02449950, void, Reset, (app::DecoderFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02449980, void, InternalReset, (app::DecoderFallbackBuffer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, InternalInitialize, (app::DecoderFallbackBuffer * this_ptr, uint8_t* byte_start, uint16_t* char_end))
    IL2CPP_REGISTER_METHOD(0x024499A0, bool, InternalFallback_1, (app::DecoderFallbackBuffer * this_ptr, app::Byte__Array* bytes, uint8_t* p_bytes, app::uint16_t** chars))
    IL2CPP_REGISTER_METHODINFO(0x0474E960, DecoderFallbackBuffer_InternalFallback__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02449C10, int32_t, InternalFallback_2, (app::DecoderFallbackBuffer * this_ptr, app::Byte__Array* bytes, uint8_t* p_bytes))
    IL2CPP_REGISTER_METHODINFO(0x04710858, DecoderFallbackBuffer_InternalFallback_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02449E70, void, ThrowLastBytesRecursive, (app::DecoderFallbackBuffer * this_ptr, app::Byte__Array* bytes_unknown))
    IL2CPP_REGISTER_METHODINFO(0x04747D38, DecoderFallbackBuffer_ThrowLastBytesRecursive__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DecoderFallbackBuffer * this_ptr))
} // namespace app::classes::System::Text::DecoderFallbackBuffer
