#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::GUIScrollGroup {
    IL2CPP_REGISTER_METHOD(0x029EF9B0, void, ctor, (app::GUIScrollGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029EF9C0, void, CalcWidth, (app::GUIScrollGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029EFA60, void, SetHorizontal, (app::GUIScrollGroup * this_ptr, float x, float width))
    IL2CPP_REGISTER_METHOD(0x029EFC30, void, CalcHeight, (app::GUIScrollGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029EFDE0, void, SetVertical, (app::GUIScrollGroup * this_ptr, float y, float height))
} // namespace app::classes::UnityEngine::GUIScrollGroup
