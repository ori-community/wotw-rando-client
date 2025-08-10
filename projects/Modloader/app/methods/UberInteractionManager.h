#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IInteractable.h>
#include <Modloader/app/structs/List_1_IInteractable_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberInteractionActor.h>
#include <Modloader/app/structs/UberInteractionManager.h>
#include <Modloader/app/structs/UberInteractionManager_ExplosionApplication.h>
#include <Modloader/app/structs/UberInteractionManager_PropertyIDCache.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberInteractionManager {
    IL2CPP_REGISTER_METHOD(
        0x013F7820,
        app::UberInteractionManager_PropertyIDCache*,
        GetCachedPropertyID,
        app::UberInteractionManager_PropertyIDCache** static_cache,
        app::String* property_interaction_name
    )
    IL2CPP_REGISTER_METHOD(0x013F7980, app::String*, GetInteractionCurveString, )
    IL2CPP_REGISTER_METHOD(0x013F7D00, float, get_InteractionTime, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F7E40, void, OnEnable, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F7FC0, void, OnDisable, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013F8190, void, UpdateCurves, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x013F85D0,
        void,
        Explode_1,
        app::UberInteractionManager* this_ptr,
        app::Vector3 position,
        float outward_speed,
        app::Vector4 strength,
        float radius,
        float start_time,
        bool force_play
    )
    IL2CPP_REGISTER_METHOD(
        0x013F8730,
        void,
        Explode_2,
        app::UberInteractionManager* this_ptr,
        app::Vector3 position,
        float outward_speed,
        app::Vector4 strength,
        float radius,
        float angle,
        app::Vector3 forward_direction,
        float start_time,
        bool force_play
    )
    IL2CPP_REGISTER_METHOD(
        0x013F87D0,
        void,
        Explode_3,
        app::UberInteractionManager* this_ptr,
        app::Vector3 position,
        float outward_speed,
        app::Vector4 strength,
        float radius,
        float start_time,
        bool force_play,
        float angle,
        app::Vector3 forward_direction
    )
    IL2CPP_REGISTER_METHOD(
        0x013F94E0,
        void,
        TestInteractionForExplosionApplication,
        app::UberInteractionManager* this_ptr,
        int32_t interaction_index,
        app::Vector3* position,
        float outward_speed,
        app::Vector4* strength,
        float radius,
        float start_time,
        bool force_play,
        float angle,
        app::Vector3* forward_direction,
        bool process_angle
    )
    IL2CPP_REGISTER_METHOD(0x013F9BD0, void, RemoveInteractions, app::UberInteractionManager* this_ptr, app::List_1_IInteractable_* affected)
    IL2CPP_REGISTER_METHOD(0x013F9D10, void, RemoveAllInteractions, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x013F9DF0,
        void,
        Interact,
        app::UberInteractionManager* this_ptr,
        app::UberInteractionActor* actor,
        app::Vector3 velocity,
        app::Vector3 prev_pos,
        int32_t priority
    )
    IL2CPP_REGISTER_METHOD(0x013FA170, void, ResolveActorQueue, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x013FB020,
        void,
        ResolveActorVsInteraction,
        app::UberInteractionManager* this_ptr,
        int32_t interaction_index,
        app::UberInteractionActor* actor,
        app::Vector3* actor_position,
        app::Vector3* prev_actor_position,
        app::Vector4* strength,
        app::Vector3* velocity,
        float radius,
        float z_radius,
        float z_scale,
        bool* had_overlap
    )
    IL2CPP_REGISTER_METHOD(0x013FB4C0, void, FixedUpdate, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x013FC060,
        bool,
        ApplyExplosion,
        app::UberInteractionManager* this_ptr,
        app::UberInteractionManager_ExplosionApplication* application
    )
    IL2CPP_REGISTER_METHOD(0x013FC310, void, UpdateTexture, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FC400, void, RegisterActor, app::UberInteractionManager* this_ptr, app::UberInteractionActor* actor)
    IL2CPP_REGISTER_METHOD(0x013FC4C0, void, RegisterInteractor, app::UberInteractionManager* this_ptr, app::IInteractable* interactor)
    IL2CPP_REGISTER_METHOD(0x013FC5B0, void, DoRegisterInteractor, app::UberInteractionManager* this_ptr, app::IInteractable* interactor)
    IL2CPP_REGISTER_METHOD(0x013FD0A0, void, UpdateArrays, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FD160, void, RemoveInteractor, app::UberInteractionManager* this_ptr, app::IInteractable* interactor)
    IL2CPP_REGISTER_METHOD(0x013FD4C0, void, RemoveActor, app::UberInteractionManager* this_ptr, app::UberInteractionActor* actor)
    IL2CPP_REGISTER_METHOD(0x013FD5D0, void, OnDrawGizmos, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FDA10, void, InitializeAccelerationStructure, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FDB70, void, ctor, app::UberInteractionManager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013FE710, void, cctor, )
} // namespace app::classes::UberInteractionManager
