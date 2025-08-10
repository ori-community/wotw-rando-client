#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonControllerColliderHit.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour.h>
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour_DeathState__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::SneezeSlugDeathReactionBehaviour {
    IL2CPP_REGISTER_METHOD(0x00ED84E0, void, OnCacheSerializedComponents, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::Entity* owner)
    IL2CPP_REGISTER_METHOD(0x00ED85A0, void, OnInitializeTask, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00DB1FA0, void, StartTimeline, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00ED8860, void, StopTimeline, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00ED8A80, void, HandleCollision, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::MoonControllerColliderHit hit)
    IL2CPP_REGISTER_METHOD(
        0x0043D9E0,
        app::SneezeSlugDeathReactionBehaviour_DeathState__Enum,
        GetNextOnHitGroundState,
        app::SneezeSlugDeathReactionBehaviour* this_ptr
    )
    IL2CPP_REGISTER_METHOD(0x00ED8B90, void, OnEnterTask, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00ED8FE0, app::BehaviourStatus__Enum, OnExecuteTask, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00ED9100, void, OnExitTask, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(
        0x00ED9200,
        void,
        SetState,
        app::SneezeSlugDeathReactionBehaviour* this_ptr,
        app::SneezeSlugDeathReactionBehaviour_DeathState__Enum state
    )
    IL2CPP_REGISTER_METHOD(
        0x00ED92E0,
        void,
        EnterState,
        app::SneezeSlugDeathReactionBehaviour* this_ptr,
        app::SneezeSlugDeathReactionBehaviour_DeathState__Enum state
    )
    IL2CPP_REGISTER_METHOD(
        0x00ED9350,
        void,
        ExitState,
        app::SneezeSlugDeathReactionBehaviour* this_ptr,
        app::SneezeSlugDeathReactionBehaviour_DeathState__Enum state
    )
    IL2CPP_REGISTER_METHOD(
        0x00ED93A0,
        void,
        UpdateState,
        app::SneezeSlugDeathReactionBehaviour* this_ptr,
        app::SneezeSlugDeathReactionBehaviour_DeathState__Enum state
    )
    IL2CPP_REGISTER_METHOD(0x00ED96F0, void, EnterLaunch, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED98D0, void, EnterFall, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED9900, void, EnterLandAndExplode, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00ED9C70, void, EnterDrown, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA1B0, void, ExitLaunch, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA1C0, void, ExitFall, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA1D0, void, ExitLandAndExplode, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA1E0, void, ExitDrown, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA1F0, void, UpdateLaunch, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA340, void, UpdateFall, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA3A0, void, UpdateLandAndExplode, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA520, bool, InWater, app::SneezeSlugDeathReactionBehaviour* this_ptr, float check_offset)
    IL2CPP_REGISTER_METHOD(0x00EDA710, void, UpdateDrown, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDA950, void, ExitBehaviour, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDAA10, app::Vector3, ProcessRootMotion, app::SneezeSlugDeathReactionBehaviour* this_ptr, app::Vector3 motion)
    IL2CPP_REGISTER_METHOD(0x00EDAA40, void, BlastAttack, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDAC60, void, PlayShake, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDAD50, void, ctor, app::SneezeSlugDeathReactionBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00EDAE10, void, _EnterLaunch_b__42_0, app::SneezeSlugDeathReactionBehaviour* this_ptr)
} // namespace app::classes::SneezeSlugDeathReactionBehaviour
