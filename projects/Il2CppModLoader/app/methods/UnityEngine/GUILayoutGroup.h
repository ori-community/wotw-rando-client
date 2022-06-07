#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::GUILayoutGroup {
    IL2CPP_REGISTER_METHOD(0x029E8300, void, ctor, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E8500, int32_t, get_marginLeft, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E8510, int32_t, get_marginRight, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5350, int32_t, get_marginTop, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x024B5400, int32_t, get_marginBottom, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E8520, void, ApplyOptions, (app::GUILayoutGroup * this_ptr, app::GUILayoutOption__Array * options))
    IL2CPP_REGISTER_METHOD(0x029E86A0, void, ApplyStyleSettings, (app::GUILayoutGroup * this_ptr, app::GUIStyle * style))
    IL2CPP_REGISTER_METHOD(0x00A3C8D0, void, ResetCursor, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E8980, app::GUILayoutEntry *, GetNext, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472EFB8, GUILayoutGroup_GetNext__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029E8C90, app::Rect, GetLast, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E9100, void, Add, (app::GUILayoutGroup * this_ptr, app::GUILayoutEntry * e))
    IL2CPP_REGISTER_METHOD(0x029E91A0, void, CalcWidth, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029E9B40, void, SetHorizontal, (app::GUILayoutGroup * this_ptr, float x, float width))
    IL2CPP_REGISTER_METHOD(0x029EA4A0, void, CalcHeight, (app::GUILayoutGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029EAC90, void, SetVertical, (app::GUILayoutGroup * this_ptr, float y, float height))
    IL2CPP_REGISTER_METHOD(0x029EB5A0, app::String *, ToString, (app::GUILayoutGroup * this_ptr))
}
