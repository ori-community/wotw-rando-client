#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IDesiredUberState.h>
#include <Modloader/app/structs/IMoonSetupAnimator.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/KeystoneDoorLogic.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_IGenericUberState_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>

namespace app::classes::KeystoneDoorLogic {
    IL2CPP_REGISTER_METHOD(0x002FB9D0, app::IMoonSetupAnimator*, get_MoonSetupAnimator, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6C6C0, void, set_MoonSetupAnimator, app::KeystoneDoorLogic* this_ptr, app::IMoonSetupAnimator* value)
    IL2CPP_REGISTER_METHOD(0x00E6C790, app::MoonReference_1_IGenericUberState_*, get_SharedState, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6C900, void, set_SharedState, app::KeystoneDoorLogic* this_ptr, app::MoonReference_1_IGenericUberState_* value)
    IL2CPP_REGISTER_METHOD(0x004C50A0, app::Object_1*, get_ObjectReference, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6CA00, void, Awake, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6CE10, app::MoonTimeline*, get_OpenDoorTimeline, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6CE30, app::MoonTimeline*, get_OnFailTimeline, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6CE50, int32_t, get_NumberOfOrbsRequired, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6CE70, int32_t, get_NumberOfOrbsUsed, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6CF30, void, set_NumberOfOrbsUsed, app::KeystoneDoorLogic* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00E6D000, int32_t, get_NumberOfOrbsPlacedAtSlots, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B11510, void, OnValidate, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6D120, void, Highlight, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6D700, void, Unhighlight, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6DA50, void, RestoreOrbs, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6DC10, void, OnEnable, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6DCD0, void, OnDisable, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6DDE0, void, Apply, app::KeystoneDoorLogic* this_ptr, app::UberStateApplyContext__Enum context)
    IL2CPP_REGISTER_METHOD(0x00E6DF80, app::IUberState__Array*, get_AffectingUberStates, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6E020, app::List_1_UnityEngine_GameObject_*, get_AllTargets, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6E1E0, void, StopTransitions, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6E210, float, get_DistanceToSein, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6E3C0, bool, get_OriHasTargets, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6E4E0, bool, get_SeinInRange, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6E750, void, FixedUpdate, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6F6B0, bool, AreOpened, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6F6C0, void, OpenDoor, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6FD00, void, MakeSureItsAtEnd, app::KeystoneDoorLogic* this_ptr, app::Transform* c)
    IL2CPP_REGISTER_METHOD(0x00E6FDF0, void, StartStressTest, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StressTestUpdate, app::KeystoneDoorLogic* this_ptr, float delta_time)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EndStressTest, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFBD0, app::StressTestStatus__Enum, get_StressTestStatus, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6FE10, void, set_StressTestStatus, app::KeystoneDoorLogic* this_ptr, app::StressTestStatus__Enum value)
    IL2CPP_REGISTER_METHOD(0x00E6FE20, bool, get_CanExecuteStressTest, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_StopMovingPlayerWhilePerforming, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E6FFC0, app::String*, get_StressTestName, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E70040, app::IDesiredUberState*, GetRequirementsForTimeline, app::KeystoneDoorLogic* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00E70120, void, ctor, app::KeystoneDoorLogic* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00E701F0, void, _OpenDoor_b__65_0, app::KeystoneDoorLogic* this_ptr)
} // namespace app::classes::KeystoneDoorLogic
