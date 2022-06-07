#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Timeline::FixedDurationSceneEntity_SceneEntityEvent {
    IL2CPP_REGISTER_METHOD(0x0076CEF0, void, ctor, (app::FixedDurationSceneEntity_SceneEntityEvent * this_ptr, app::FixedDurationSceneEntity_Markers__Enum event))
    IL2CPP_REGISTER_METHOD(0x00529FF0, app::FixedDurationSceneEntity_Markers__Enum, get_Event, (app::FixedDurationSceneEntity_SceneEntityEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0076CFB0, int32_t, get_EventId, (app::FixedDurationSceneEntity_SceneEntityEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, (app::FixedDurationSceneEntity_SceneEntityEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_StaticTime, (app::FixedDurationSceneEntity_SceneEntityEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Name, (app::FixedDurationSceneEntity_SceneEntityEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsConstrainable, (app::FixedDurationSceneEntity_SceneEntityEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsDeletable, (app::FixedDurationSceneEntity_SceneEntityEvent * this_ptr))
}
