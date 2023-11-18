#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GUILayoutEntry.h>
#include <Modloader/app/structs/GUILayoutOption__Array.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::UnityEngine::GUILayoutEntry {
    IL2CPP_REGISTER_METHOD(0x029E6F30, void, ctor_1, (app::GUILayoutEntry * this_ptr, float _min_width, float _max_width, float _min_height, float _max_height, app::GUIStyle* _style))
    IL2CPP_REGISTER_METHOD(0x029E7070, void, ctor_2, (app::GUILayoutEntry * this_ptr, float _min_width, float _max_width, float _min_height, float _max_height, app::GUIStyle* _style, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x01F1A590, app::GUIStyle*, get_style, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E71A0, void, set_style, (app::GUILayoutEntry * this_ptr, app::GUIStyle* value))
    IL2CPP_REGISTER_METHOD(0x029E71C0, int32_t, get_marginLeft, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E7240, int32_t, get_marginRight, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E72C0, int32_t, get_marginTop, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E7340, int32_t, get_marginBottom, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E73C0, int32_t, get_marginHorizontal, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E7400, int32_t, get_marginVertical, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalcWidth, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CalcHeight, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E7440, void, SetHorizontal, (app::GUILayoutEntry * this_ptr, float x, float width))
    IL2CPP_REGISTER_METHOD(0x029E7450, void, SetVertical, (app::GUILayoutEntry * this_ptr, float y, float height))
    IL2CPP_REGISTER_METHOD(0x029E7460, void, ApplyStyleSettings, (app::GUILayoutEntry * this_ptr, app::GUIStyle* style))
    IL2CPP_REGISTER_METHOD(0x029E75F0, void, ApplyOptions, (app::GUILayoutEntry * this_ptr, app::GUILayoutOption__Array* options))
    IL2CPP_REGISTER_METHOD(0x029E79E0, app::String*, ToString, (app::GUILayoutEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E8260, void, cctor, ())
} // namespace app::classes::UnityEngine::GUILayoutEntry
