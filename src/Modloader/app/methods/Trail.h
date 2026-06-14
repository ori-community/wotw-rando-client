#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Trail_1.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Trail {
    IL2CPP_REGISTER_METHOD(0x00B02030, void, OnPoolSpawned, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B020E0, void, OnEnable, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B021A0, void, OnDisable, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B02280, void, Awake, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B02390, void, OnDestroy, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B02430, app::Vector3, get_TargetPosition, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B024C0, void, FixedUpdate, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B02D60, void, LateUpdate, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF790, bool, get_IsSuspended, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FF7A0, void, set_IsSuspended, app::Trail_1* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FF7B0, app::SuspendableMask__Enum, get_Mask, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B02FA0, void, set_Mask, app::Trail_1* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00B02430, app::Vector3, get_Position, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, set_Position, app::Trail_1* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x00B03050, app::Vector3, get_Speed, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B03070, void, set_Speed, app::Trail_1* this_ptr, app::Vector3 value)
    IL2CPP_REGISTER_METHOD(0x009886D0, void, OnGoThroughPortal, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapEnter, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPortalOverlapExit, app::Trail_1* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B03080, void, ctor, app::Trail_1* this_ptr)
} // namespace app::classes::Trail
