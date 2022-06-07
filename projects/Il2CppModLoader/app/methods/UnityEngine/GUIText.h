#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::GUIText {
    IL2CPP_REGISTER_METHOD(0x0319B000, app::String *, get_text, (app::GUIText * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0319B050, void, set_text, (app::GUIText * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x0319B0B0, void, set_fontSize, (app::GUIText * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0319B110, void, set_fontStyle, (app::GUIText * this_ptr, app::FontStyle__Enum value))
}
