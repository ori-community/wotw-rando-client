#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonGetAbilityPedestal.h>
#include <Modloader/app/structs/MoonGetAbilityPedestal_States__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::MoonGetAbilityPedestal {
    IL2CPP_REGISTER_METHOD(0x00F4E2B0, bool, get_SeinInRange, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4E4C0, void, ChangeState, (app::MoonGetAbilityPedestal * this_ptr, app::MoonGetAbilityPedestal_States__Enum state))
    IL2CPP_REGISTER_METHOD(0x00F4E5B0, void, UpdateStates, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4E600, void, UpdateOutOfRange, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4E630, void, ExitInRangeState, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4E700, void, UpdateInRangeState, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4EAF0, void, FixedUpdate, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4EBD0, void, ActivatePedestal, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4F240, void, Awake, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4F5E0, void, SequenceCompleted, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0472A8D8, MoonGetAbilityPedestal_SequenceCompleted__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F4F6A0, void, OnStopPlaying, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A358, MoonGetAbilityPedestal_OnStopPlaying__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F4F7A0, void, OnEnable, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4F8B0, void, OnDisable, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F4F9C0, void, StartStressTest, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, (app::MoonGetAbilityPedestal * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00F4FD20, void, EndStressTest, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065B580, app::StressTestStatus__Enum, get_StressTestStatus, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00BFB9C0, void, set_StressTestStatus, (app::MoonGetAbilityPedestal * this_ptr, app::StressTestStatus__Enum value))
    IL2CPP_REGISTER_METHOD(0x00F4FEC0, bool, get_CanExecuteStressTest, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_StopMovingPlayerWhilePerforming, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F50080, void, FinishGetAbilityStressTest, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04708B18, MoonGetAbilityPedestal_FinishGetAbilityStressTest__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F50090, app::String*, get_StressTestName, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F50110, app::IDesiredUberState*, GetRequirementsForTimeline, (app::MoonGetAbilityPedestal * this_ptr, app::MoonTimeline* timeline))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_ApplyOnEditor, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F501E0, void, Apply, (app::MoonGetAbilityPedestal * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x00F50250, app::IUberState__Array*, get_AffectingUberStates, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F502F0, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F504B0, void, ctor, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F50560, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x00F506B0, void, _Awake_b__27_0, (app::MoonGetAbilityPedestal * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470E890, MoonGetAbilityPedestal__Awake_b__27_0__MethodInfo)
} // namespace app::classes::MoonGetAbilityPedestal
