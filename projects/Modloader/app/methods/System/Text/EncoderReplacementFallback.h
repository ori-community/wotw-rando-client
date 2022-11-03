#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Text::EncoderReplacementFallback {
    IL2CPP_REGISTER_METHOD(0x0244E990, void, ctor_1, (app::EncoderReplacementFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244EA20, void, ctor_2, (app::EncoderReplacementFallback * this_ptr, app::String* replacement))
    IL2CPP_REGISTER_METHODINFO(0x047211E0, EncoderReplacementFallback__ctor_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_DefaultString, (app::EncoderReplacementFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244EC00, app::EncoderFallbackBuffer*, CreateFallbackBuffer, (app::EncoderReplacementFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244B620, int32_t, get_MaxCharCount, (app::EncoderReplacementFallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0244ED70, bool, Equals, (app::EncoderReplacementFallback * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x017E12D0, int32_t, GetHashCode, (app::EncoderReplacementFallback * this_ptr))
} // namespace app::classes::System::Text::EncoderReplacementFallback
