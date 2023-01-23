#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ShrineCombat.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/PassiveSetupInfo_State__Enum.h>
#include <Modloader/app/structs/Func_2_ShrineCombat_WaveProgressMarker_Boolean_.h>
#include <Modloader/app/structs/ShrineCombat_WaveProgressMarker.h>
#include <Modloader/app/structs/UberStateApplyContext__Enum.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ShrineCombat {
    IL2CPP_REGISTER_METHOD(0x00739A80, bool, get_IsSuspended, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739A90, void, set_IsSuspended, (app::ShrineCombat * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x005065F0, app::SuspendableMask__Enum, get_Mask, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739BC0, void, set_Mask, (app::ShrineCombat * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x00739C80, bool, get_IsShowingHint, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739D30, void, HidePressToStartHint, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739E10, void, ShowPressToStartHint, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739F30, app::Input_InputButtonProcessor*, get_Button, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739FD0, bool, get_HasShrineBeenBeatOnce, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739FD0, bool, get_HasPickedUpShrineReward, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00739FF0, bool, get_IsInInteractionRadius, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073A020, float, get_DistanceToSein, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073A220, app::Vector3, get_SeinPosition, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073A290, app::SeinCharacter*, get_Sein, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073A320, bool, get_IsRewardCollected, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073A420, bool, IsInAllowedArea, (app::ShrineCombat * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x0073A610, bool, get_IsOnGround, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073A660, bool, get_CanTriggerShrine, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073A790, bool, get_IsRunning, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073A7C0, bool, IsAnyShrineRunning, ())
    IL2CPP_REGISTER_METHOD(0x0073A990, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0073AA70, void, Awake, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073ACF0, void, OnEnable, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073AF90, void, OnDisable, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073B1D0, void, OnDestroy, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073B270, void, OnRestoreCheckpoint, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04722B98, ShrineCombat_OnRestoreCheckpoint__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0073B3D0, void, FixedUpdate, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073B440, void, RefillHealthAndEnergy, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073B610, void, InitializeToCorrectState, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073B670, void, HandleEnemiesOutOfBounds, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073B810, void, SetAllVisualsToState, (app::ShrineCombat * this_ptr, app::PassiveSetupInfo_State__Enum desired_state, bool do_transition, app::Func_2_ShrineCombat_WaveProgressMarker_Boolean_* condition))
    IL2CPP_REGISTER_METHOD(0x0073B9E0, void, UpdateMarkersForWaves, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073BC20, bool, ShouldTurnOffWhenReplayTriggered, (app::ShrineCombat * this_ptr, app::ShrineCombat_WaveProgressMarker* marker))
    IL2CPP_REGISTER_METHODINFO(0x0472B3E0, ShrineCombat_ShouldTurnOffWhenReplayTriggered__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0073BC30, void, RestrictInteractionButtonSlot, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073BCE0, void, OnPostTimeSlicedEnable, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_ApplyOnEditor, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073BDC0, void, Apply, (app::ShrineCombat * this_ptr, app::UberStateApplyContext__Enum context))
    IL2CPP_REGISTER_METHOD(0x0073BFA0, app::IUberState__Array*, get_AffectingUberStates, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073C040, app::List_1_UnityEngine_GameObject_*, get_AllTargets, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073C200, app::String__Array*, GetAllConditionNames, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073C2B0, void, EnsureMapExists, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073C460, app::Int32__Array*, GetAllConditionGuids, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073C510, app::String*, GetConditionNameFromGuid, (app::ShrineCombat * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x0073C600, bool, IsConditionGuidValid, (app::ShrineCombat * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x0073C610, bool, Validate, (app::ShrineCombat * this_ptr, int32_t guid))
    IL2CPP_REGISTER_METHOD(0x0073C650, void, ctor, (app::ShrineCombat * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0073C960, void, cctor, ())
} // namespace app::classes::ShrineCombat
