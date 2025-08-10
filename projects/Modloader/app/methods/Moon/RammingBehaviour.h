#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/EntityReactionBehaviour_ReasonWhyReactionWontInterrupt.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RammingBehaviour.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::Moon::RammingBehaviour {
    IL2CPP_REGISTER_METHOD(0x00805AA0, int32_t, get_GroundMask, )
    IL2CPP_REGISTER_METHOD(
        0x00C4CC00,
        bool,
        IsBlockingInterruption,
        app::RammingBehaviour* this_ptr,
        app::EntityDamageEvent* damage_event,
        app::EntityReactionBehaviour_ReasonWhyReactionWontInterrupt* reason
    )
    IL2CPP_REGISTER_METHOD(0x00C4CD30, void, OnEntityInitialized, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4D7F0, void, OnEnter, app::RammingBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C4DAF0, void, CacheSerializedComponents, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4DBD0, void, Awake, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4DED0, void, OnDisable, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4DFC0, app::BehaviourStatus__Enum, OnExecute, app::RammingBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C4E080, void, OnExit, app::RammingBehaviour* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00C4E190, void, StartTimeline, app::RammingBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00C4E290, void, ResetTimeline, app::RammingBehaviour* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x00C4E4C0, float, GetLookDirection, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4E5A0, float, GetDirectionToTarget, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4E6C0, bool, HasHitWall, app::RammingBehaviour* this_ptr, app::Vector3* wall_normal)
    IL2CPP_REGISTER_METHOD(0x00C4EC00, void, OnHitByHeavyAttack, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4EC60, void, SpawnSlamChargeEffect, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00C4EDA0,
        void,
        SpawnHitWallEffect,
        app::RammingBehaviour* this_ptr,
        app::Vector3 wall_normal,
        app::Vector3 position,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(0x00C4F470, bool, IsPointInsideAllowedArea, app::RammingBehaviour* this_ptr, app::Vector3 point)
    IL2CPP_REGISTER_METHOD(0x00C4F510, void, OnRammingTurnStart, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4F520, void, OnRammingTurnEnd, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4F570, void, OnRammingTurnFlipEvent, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4E080, void, Stop, app::RammingBehaviour* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00C4F5C0, void, ctor, app::RammingBehaviour* this_ptr)
} // namespace app::classes::Moon::RammingBehaviour
