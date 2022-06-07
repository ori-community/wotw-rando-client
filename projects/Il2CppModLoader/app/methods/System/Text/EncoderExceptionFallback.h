#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Text::EncoderExceptionFallback {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EncoderExceptionFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244C480, app::EncoderFallbackBuffer *, CreateFallbackBuffer, (app::EncoderExceptionFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_MaxCharCount, (app::EncoderExceptionFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244C5C0, bool, Equals, (app::EncoderExceptionFallback * this_ptr, app::Object * value))
    IL2CPP_REGISTER_METHOD(0x0244C660, int32_t, GetHashCode, (app::EncoderExceptionFallback * this_ptr))
}
