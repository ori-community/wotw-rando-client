#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::GUIStyleState {
    IL2CPP_REGISTER_METHOD(0x029F75C0, void, ctor_1, (app::GUIStyleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0231B8E0, void, ctor_2, (app::GUIStyleState * this_ptr, app::GUIStyle* source_style, void* source))
    IL2CPP_REGISTER_METHOD(0x029F7620, app::Texture2D*, get_background, (app::GUIStyleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F7670, void, set_background, (app::GUIStyleState * this_ptr, app::Texture2D* value))
    IL2CPP_REGISTER_METHOD(0x029F76D0, app::Color, get_textColor, (app::GUIStyleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F7750, void, set_textColor, (app::GUIStyleState * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x029F77B0, void*, Init, ())
    IL2CPP_REGISTER_METHOD(0x029F7800, void, Cleanup, (app::GUIStyleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F7850, app::GUIStyleState*, GetGUIStyleState, (app::GUIStyle * source_style, void* source))
    IL2CPP_REGISTER_METHOD(0x029F79A0, void, Finalize, (app::GUIStyleState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F7AC0, void, get_textColor_Injected, (app::GUIStyleState * this_ptr, app::Color* ret))
    IL2CPP_REGISTER_METHOD(0x029F7B20, void, set_textColor_Injected, (app::GUIStyleState * this_ptr, app::Color* value))
} // namespace app::classes::UnityEngine::GUIStyleState
