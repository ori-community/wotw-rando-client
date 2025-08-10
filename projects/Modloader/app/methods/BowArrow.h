#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BowArrow.h>
#include <Modloader/app/structs/Collider.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DamageResult.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/RecordableParsingGroup__Enum.h>
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/TrackingExclusions.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::BowArrow {
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_Charged, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_Charged, app::BowArrow* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D404E0, app::Vector3, get_CurrentTipPosition, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D405A0, float, get_Range, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D406B0, app::SpiritShardType__Enum, get_SpiritShardDamageType, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D40770, app::SuspendableMask__Enum, get_Mask, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D40780, void, set_Mask, app::BowArrow* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x00D40790, bool, get_IsSuspended, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D407A0, void, set_IsSuspended, app::BowArrow* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00D40A60, void, Release, app::BowArrow* this_ptr, app::DamageOwner* damage_owner, bool charged)
    IL2CPP_REGISTER_METHOD(0x00D41870, app::Damage*, CreateNewDamage, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D41D70, void, Awake, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D41FB0, void, OnEnable, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D42280, void, OnDisable, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D42440, void, ResetState, app::BowArrow* this_ptr, bool create_trail)
    IL2CPP_REGISTER_METHOD(0x00D42B50, void, TurnRicochetVisuals, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D42C50, void, TurnDefaultVisuals, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D42D50, void, DisableAllColliders, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D42E30, void, OnPoolSpawned, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D42E40, void, OnPoolDespawned, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D42E50, void, RestoreBounces, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D42E80, void, RemoveOldReflectors, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D43260, void, FixedUpdate, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D436B0, void, OnTimelineStopped, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D437A0, void, OnAfterCollisions, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D44120, void, SetReflectorTime, app::BowArrow* this_ptr, app::Collider* reflector, float reflection_time)
    IL2CPP_REGISTER_METHOD(0x00D44260, bool, IsRecentReflector, app::BowArrow* this_ptr, float reflection_time)
    IL2CPP_REGISTER_METHOD(
        0x00D442D0,
        void,
        OnTriggerEnterByRaycast,
        app::BowArrow* this_ptr,
        app::Collider* collider,
        app::Vector3 collision_normal,
        app::Vector3 collision_point
    )
    IL2CPP_REGISTER_METHOD(0x00D449C0, void, OnTriggerStay, app::BowArrow* this_ptr, app::Collider* other)
    IL2CPP_REGISTER_METHOD(0x00D44C30, void, OnCollisionEnter_1, app::BowArrow* this_ptr, app::Collision* collision)
    IL2CPP_REGISTER_METHOD(
        0x00D44E10,
        void,
        OnCollisionEnter_2,
        app::BowArrow* this_ptr,
        app::Collider* collider,
        app::Vector3 collision_normal,
        app::Vector3 collision_point
    )
    IL2CPP_REGISTER_METHOD(0x00D45590, void, Disperse, app::BowArrow* this_ptr, app::Vector3 location)
    IL2CPP_REGISTER_METHOD(
        0x00D45C30,
        void,
        Explode_1,
        app::BowArrow* this_ptr,
        app::Vector3 location,
        app::Vector2 normal,
        app::SurfaceMaterialType__Enum surface_type
    )
    IL2CPP_REGISTER_METHOD(
        0x00D46060,
        void,
        PlayVFX,
        app::BowArrow* this_ptr,
        app::Vector3 location,
        app::Vector2 normal,
        app::SurfaceMaterialType__Enum surface_type,
        app::GameObject* vfx,
        bool disperse
    )
    IL2CPP_REGISTER_METHOD(0x00D46570, void, HandleExplosiveShard, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00D467E0,
        void,
        DoExplosion,
        float first_delay,
        float sub_delays,
        app::Vector3 position,
        app::GameObject* explosion_prefab,
        float radius_expansion_percentage
    )
    IL2CPP_REGISTER_METHOD(0x00D46C60, void, Explode_2, float radius, app::GameObject* explosion_g_o)
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, ImpactSoundRtpcGetValue, app::BowArrow* this_ptr, app::Transform* attached)
    IL2CPP_REGISTER_METHOD(0x00D470C0, bool, ShouldPierce, app::BowArrow* this_ptr, app::Collider* collider)
    IL2CPP_REGISTER_METHOD(0x00D47250, int32_t, get_BounceCount, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D47360, float, CalculateExtraRicochetDamage, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D474A0, float, CalculateDamage, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D474D0, void, Update, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D47710, void, OnDamageResultReceived, app::BowArrow* this_ptr, app::DamageResult damage_result)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_TrackTranformChangesForRecording, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043D9E0, app::RecordableParsingGroup__Enum, get_ParsingGroup, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D47870, app::TrackingExclusions, get_TrackingExclusions, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D47880, void, ctor, app::BowArrow* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D47BB0, void, cctor, )
} // namespace app::classes::BowArrow
