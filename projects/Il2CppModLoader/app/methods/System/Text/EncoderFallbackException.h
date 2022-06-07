#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::EncoderFallbackException {
    IL2CPP_REGISTER_METHOD(0x0244D5B0, void, ctor_1, (app::EncoderFallbackException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01FEFD10, void, ctor_2, (app::EncoderFallbackException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x0244D640, void, ctor_3, (app::EncoderFallbackException * this_ptr, app::String * message, uint16_t char_unknown, int32_t index))
    IL2CPP_REGISTER_METHOD(0x0244D690, void, ctor_4, (app::EncoderFallbackException * this_ptr, app::String * message, uint16_t char_unknown_high, uint16_t char_unknown_low, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x0472BA50, EncoderFallbackException__ctor_3__MethodInfo)
}
