#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>

namespace app::classes::UnityEngine::UI::ListPool_1_UnityEngine_Vector3_ {
    IL2CPP_REGISTER_METHOD(0x02ACE750, app::List_1_UnityEngine_Vector3_*, Get, ())
    IL2CPP_REGISTER_METHOD(0x02ACE8C0, void, Release, (app::List_1_UnityEngine_Vector3_ * to_release))
    IL2CPP_REGISTER_METHOD(0x02ACE6D0, void, Clear, (app::List_1_UnityEngine_Vector3_ * l))
    IL2CPP_REGISTER_METHOD(0x02ACEA40, void, cctor, ())
} // namespace app::classes::UnityEngine::UI::ListPool_1_UnityEngine_Vector3_
