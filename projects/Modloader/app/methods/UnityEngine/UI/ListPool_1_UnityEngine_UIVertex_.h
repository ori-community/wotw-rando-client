#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_UIVertex_.h>

namespace app::classes::UnityEngine::UI::ListPool_1_UnityEngine_UIVertex_ {
    IL2CPP_REGISTER_METHOD(0x02ACE750, app::List_1_UnityEngine_UIVertex_*, Get, ())
    IL2CPP_REGISTER_METHODINFO(0x047606E8, ListPool_1_UnityEngine_UIVertex__Get__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACE8C0, void, Release, (app::List_1_UnityEngine_UIVertex_ * to_release))
    IL2CPP_REGISTER_METHODINFO(0x04748C30, ListPool_1_UnityEngine_UIVertex__Release__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACE6D0, void, Clear, (app::List_1_UnityEngine_UIVertex_ * l))
    IL2CPP_REGISTER_METHOD(0x02ACEA40, void, cctor, ())
} // namespace app::classes::UnityEngine::UI::ListPool_1_UnityEngine_UIVertex_
