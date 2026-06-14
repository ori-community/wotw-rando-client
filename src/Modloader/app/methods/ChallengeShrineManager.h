#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum.h>
#include <Modloader/app/structs/ChallengeShrineManager.h>
#include <Modloader/app/structs/ChallengeShrineTrigger.h>
#include <Modloader/app/structs/LegacyTrigger.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::ChallengeShrineManager {
    IL2CPP_REGISTER_METHOD(0x00A35F10, bool, get_IsChallengeOngoing, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01041740, void, OnEnable, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010417D0, void, Start, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010422C0, void, OnDestroy, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01042C80, void, OnDisable, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01042D60, void, Update, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01042E70, void, RewardPickedUp, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01042EA0, void, HandleDeath, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010430A0, void, ResetChallenge, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01043470, void, StartChallenge, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01043880, void, PauseTimer, app::ChallengeShrineManager* this_ptr, bool paused)
    IL2CPP_REGISTER_METHOD(0x01043940, void, NextWave, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01043E10, void, StartWave, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01043FA0, void, TeleportBackToStart, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x010440C0, void, AddTime, app::ChallengeShrineManager* this_ptr, float time_to_add)
    IL2CPP_REGISTER_METHOD(0x01044110, void, AddTimeFromTrigger, app::ChallengeShrineManager* this_ptr, app::LegacyTrigger* trigger)
    IL2CPP_REGISTER_METHOD(0x010442E0, void, FinishWave, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01044310, void, ChallengeFailed, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01044540, void, ChallengeCompleted, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01044760, void, ActivateShrineUI, app::ChallengeShrineManager* this_ptr, bool on)
    IL2CPP_REGISTER_METHOD(0x01044850, void, MoveCurrentCharacterToPosition, app::ChallengeShrineManager* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x01044940, void, Trigger, app::ChallengeShrineManager* this_ptr, app::ChallengeShrineTrigger* trigger)
    IL2CPP_REGISTER_METHOD(0x01044A80, void, HandleTrigger, app::ChallengeShrineManager* this_ptr, app::ChallengeShrineTrigger* trigger)
    IL2CPP_REGISTER_METHOD(
        0x01044B20,
        void,
        HandleTriggerType,
        app::ChallengeShrineManager* this_ptr,
        app::ChallengeShrineAnimatorEntity_ChallengeShrineActionType__Enum type
    )
    IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsSuspended, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsSuspended, app::ChallengeShrineManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FFCE0, app::SuspendableMask__Enum, get_Mask, app::ChallengeShrineManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01044E30, void, set_Mask, app::ChallengeShrineManager* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x01044EF0, void, ctor, app::ChallengeShrineManager* this_ptr)
} // namespace app::classes::ChallengeShrineManager
