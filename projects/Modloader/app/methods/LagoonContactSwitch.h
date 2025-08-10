#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/LagoonContactSwitch.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::LagoonContactSwitch {
    IL2CPP_REGISTER_METHOD(0x00EFEA50, bool, get_IsActivated, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFEB30, void, set_IsActivated, app::LagoonContactSwitch* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00EFEC20, void, Start, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF0D0, void, OnEnable, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF0F0, void, OnDisable, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF110, void, OnTriggerEnable, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF1B0, void, OnTriggerDisable, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF250, void, FixedUpdate, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF530, void, OnTriggerActivated, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF670, void, ToggleSwitch, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF6E0, void, TurnOn, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF890, void, TurnOff, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF8E0, bool, get_IsOn, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF8F0, void, OnRestoreCheckpoint, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFF920, void, Apply, app::LagoonContactSwitch* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00EFF930, void, ApplyState, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFFB70, app::IUberState__Array*, get_AffectingUberStates, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFFC60, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFFE20, void, StopAllTimelines, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EFFEA0, void, PlayTimeline, app::LagoonContactSwitch* this_ptr, app::MoonTimeline* moon_timeline)
    IL2CPP_REGISTER_METHOD(0x00EFFF40, void, ActivateSwitch, app::LagoonContactSwitch* this_ptr, bool play_open_door_timeline)
    IL2CPP_REGISTER_METHOD(0x00F00120, void, DeactivateSwitch, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F00130, void, ctor, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F00150, void, _Start_b__22_0, app::LagoonContactSwitch* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F00160, void, _Start_b__22_1, app::LagoonContactSwitch* this_ptr)
} // namespace app::classes::LagoonContactSwitch
