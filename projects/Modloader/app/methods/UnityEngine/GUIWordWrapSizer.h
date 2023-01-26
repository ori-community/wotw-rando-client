#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUIWordWrapSizer.h>
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/GUILayoutOption__Array.h>
#include <Modloader/app/structs/GUIStyle.h>

namespace app::classes::UnityEngine::GUIWordWrapSizer {
    IL2CPP_REGISTER_METHOD(0x029F9700, void, ctor, (app::GUIWordWrapSizer * this_ptr, app::GUIStyle* style, app::GUIContent* content, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029F9960, void, CalcWidth, (app::GUIWordWrapSizer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029F9AE0, void, CalcHeight, (app::GUIWordWrapSizer * this_ptr))
} // namespace app::classes::UnityEngine::GUIWordWrapSizer
