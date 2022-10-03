#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Text::RegularExpressions::Capture {
    IL2CPP_REGISTER_METHOD(0x01DF8C80, void, ctor_1, (app::Capture * this_ptr, app::String* text, int32_t i, int32_t l))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Index, (app::Capture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A010, int32_t, get_Length, (app::Capture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02580B40, app::String*, get_Value, (app::Capture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02580B40, app::String*, ToString, (app::Capture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, GetOriginalString, (app::Capture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02580B70, app::String*, GetLeftSubstring, (app::Capture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02580BA0, app::String*, GetRightSubstring, (app::Capture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02580BE0, void, ctor_2, (app::Capture * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478A9D0, Capture__ctor_1__MethodInfo)
} // namespace app::classes::System::Text::RegularExpressions::Capture
