#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::DecoderExceptionFallback {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DecoderExceptionFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02448D80, app::DecoderFallbackBuffer*, CreateFallbackBuffer, (app::DecoderExceptionFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EE0, int32_t, get_MaxCharCount, (app::DecoderExceptionFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02448EC0, bool, Equals, (app::DecoderExceptionFallback * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02448F60, int32_t, GetHashCode, (app::DecoderExceptionFallback * this_ptr))
} // namespace app::classes::System::Text::DecoderExceptionFallback
