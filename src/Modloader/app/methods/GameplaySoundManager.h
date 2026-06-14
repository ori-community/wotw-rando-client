#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/AkCallbackInfo.h>
#include <Modloader/app/structs/AkCallbackType__Enum.h>
#include <Modloader/app/structs/ArtificialSoundHostReference.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GameplaySoundManager.h>
#include <Modloader/app/structs/GameplaySoundManager_AudioQualitySetting__Enum.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>

namespace app::classes::GameplaySoundManager {
    IL2CPP_REGISTER_METHOD(0x004108F0, bool, get_ShowCinematicDebug, )
    IL2CPP_REGISTER_METHOD(0x00410990, void, set_ShowCinematicDebug, bool value)
    IL2CPP_REGISTER_METHOD(
        0x00410AC0,
        void,
        SetAudioQuality,
        app::GameplaySoundManager* this_ptr,
        app::GameplaySoundManager_AudioQualitySetting__Enum quality_setting
    )
    IL2CPP_REGISTER_METHOD(0x00410BE0, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x00410CA0, void, Awake, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00410D70, void, Start, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00411020, void, CacheCinematicStateId, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00411090, void, OnDestroy, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00411130, void, FixedUpdate, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x004111F0,
        void,
        ProcessOriHit,
        app::GameplaySoundManager* this_ptr,
        app::DamageResult damage_result,
        app::GameObject* weapon,
        app::AbilityType__Enum ability_type,
        app::String* hit_name
    )
    IL2CPP_REGISTER_METHOD(
        0x004119A0,
        void,
        ProcessSurfaceHit,
        app::GameplaySoundManager* this_ptr,
        app::GameObject* weapon,
        app::AbilityType__Enum ability_type,
        app::String* hit_name
    )
    IL2CPP_REGISTER_METHOD(
        0x00411C60,
        void,
        TriggerWeaponHitEvent,
        app::GameplaySoundManager* this_ptr,
        app::GameObject* weapon,
        app::AbilityType__Enum ability_type,
        app::ArtificialSoundHostReference host
    )
    IL2CPP_REGISTER_METHOD(0x00411D60, void, SetWeaponDamageRtpc, app::GameplaySoundManager* this_ptr, app::Damage* damage, app::GameObject* go)
    IL2CPP_REGISTER_METHOD(
        0x00411EA0,
        void,
        ProcessEnemyReceivedHit,
        app::GameplaySoundManager* this_ptr,
        app::DamageResult damage_result,
        app::EnemyEntity* enemy
    )
    IL2CPP_REGISTER_METHOD(0x004123C0, void, UpdateWwisePauseState, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00412C10, bool, IsGameSoftPaused, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00412DC0, void, UpdateMusicLoopEvent, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00413000,
        void,
        SyncedMusicCueCallback,
        app::GameplaySoundManager* this_ptr,
        app::Object* in_cookie,
        app::AkCallbackType__Enum in_type,
        app::AkCallbackInfo* in_info
    )
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsSuspended, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsSuspended, app::GameplaySoundManager* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00413180, app::SuspendableMask__Enum, get_Mask, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413190, void, set_Mask, app::GameplaySoundManager* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x004131A0, void, SetCinematicScope, )
    IL2CPP_REGISTER_METHOD(0x004132B0, void, UpdateCinematicState, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004133D0, void, OnGUI, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413B70, bool, get_IsCharacterInputLocked, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00414040, void, ctor, app::GameplaySoundManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00414060, void, cctor, )
} // namespace app::classes::GameplaySoundManager
