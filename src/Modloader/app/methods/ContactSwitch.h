#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ContactSwitch.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::ContactSwitch {
    IL2CPP_REGISTER_METHOD(0x011E6910, bool, get_IsActivated, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E69F0, void, set_IsActivated, app::ContactSwitch* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x011E6AE0, app::Renderer*, get_Renderer, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E6BB0, void, OnTriggerEnable, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E6C50, void, OnTriggerDisable, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E6CF0, void, FixedUpdate, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E6EA0, void, OnTriggerActivated, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E6EA0, void, ToggleSwitch, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E6F10, void, TurnOn, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E7000, void, TurnOff, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E7150, bool, get_IsOn, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E7160, void, OnRestoreCheckpoint, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E7190, void, Apply, app::ContactSwitch* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E7310, app::IUberState__Array*, get_AffectingUberStates, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E7400, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::ContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E75C0, void, ctor, app::ContactSwitch* this_ptr)
} // namespace app::classes::ContactSwitch
