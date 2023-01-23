#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Mask_.h>

namespace app::classes::UnityEngine::UI::ListPool_1_Mask_ {
    IL2CPP_REGISTER_METHOD(0x02ACE750, app::List_1_UnityEngine_UI_Mask_*, Get, ())
    IL2CPP_REGISTER_METHODINFO(0x047609C8, ListPool_1_Mask__Get__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02ACE8C0, void, Release, (app::List_1_UnityEngine_UI_Mask_ * to_release))
    IL2CPP_REGISTER_METHODINFO(0x04705F60, ListPool_1_Mask__Release__MethodInfo)
} // namespace app::classes::UnityEngine::UI::ListPool_1_Mask_
