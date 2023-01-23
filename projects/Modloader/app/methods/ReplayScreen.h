#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ReplayScreen.h>
#include <Modloader/app/structs/CleverMenuItemGroup.h>
#include <Modloader/app/structs/ReplaySetting__Array.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::ReplayScreen {
    IL2CPP_REGISTER_METHOD(0x008FE400, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x008FE480, void, Awake, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FE550, void, OnDestroy, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FE700, void, Hide, (app::ReplayScreen * this_ptr, bool change))
    IL2CPP_REGISTER_METHOD(0x008FE8E0, void, ShowImmediate, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FE930, void, HideImmediate, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FE960, void, Show, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FEA10, void, OnBackPressed, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478C470, ReplayScreen_OnBackPressed__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008FEBE0, void, PopulateItems_1, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FEC40, void, PopulateItems_2, (app::ReplayScreen * this_ptr, app::CleverMenuItemGroup* group, app::ReplaySetting__Array* replay_settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DestroyItems, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2F0, bool, get_IsSuspended, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0061E2E0, void, set_IsSuspended, (app::ReplayScreen * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007007F0, app::SuspendableMask__Enum, get_Mask, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FF170, void, set_Mask, (app::ReplayScreen * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x008FF230, void, OnPostTimeSlicedEnable, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FF340, void, OnInstantiate, (app::ReplayScreen * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FF670, void, ctor, (app::ReplayScreen * this_ptr))
} // namespace app::classes::ReplayScreen
