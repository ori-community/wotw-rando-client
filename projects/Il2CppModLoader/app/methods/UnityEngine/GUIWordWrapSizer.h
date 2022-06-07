#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::GUIWordWrapSizer {
    IL2CPP_REGISTER_METHOD(0x029F9700, void, ctor, (app::GUIWordWrapSizer * this_ptr, app::GUIStyle * style, app::GUIContent * content, app::GUILayoutOption__Array * options))
    IL2CPP_REGISTER_METHOD(0x029F9960, void, CalcWidth, (app::GUIWordWrapSizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F9AE0, void, CalcHeight, (app::GUIWordWrapSizer * this_ptr))
}
