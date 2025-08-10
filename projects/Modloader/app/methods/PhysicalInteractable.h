#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/Collision.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatRange_1.h>
#include <Modloader/app/structs/PhysicalInteractable.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/UberInteractionActor.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::PhysicalInteractable {
    IL2CPP_REGISTER_METHOD(0x014EB3D0, bool, get_CanInteract, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFB70, int32_t, get_Index, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EB3E0, void, set_Index, app::PhysicalInteractable* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x00413160, bool, get_IsRegistered, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413170, void, set_IsRegistered, app::PhysicalInteractable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00413180, app::SuspendableMask__Enum, get_Mask, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00413190, void, set_Mask, app::PhysicalInteractable* this_ptr, app::SuspendableMask__Enum value)
    IL2CPP_REGISTER_METHOD(0x003FFEA0, bool, get_IsSuspended, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008496A0, void, set_IsSuspended, app::PhysicalInteractable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x014EB3F0, app::Bounds, get_Bounds, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_IsStatic, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EB5A0, app::SoundHost*, get_EffectiveSoundHost, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsWater, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EB6D0, void, OnEnable, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EBA00, void, OnDisable, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EBCC0, void, Awake, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EBFB0, void, Update, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EC2F0, void, OnCollisionEnter, app::PhysicalInteractable* this_ptr, app::Collision* other)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnRegistered, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014EC530, float, MaxRadius, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RemoveInteraction, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x014EC540,
        void,
        SetInteraction,
        app::PhysicalInteractable* this_ptr,
        float time,
        app::Vector3 pos,
        app::Vector3 prev_pos,
        app::Vector4 strength,
        app::Vector3 velocity,
        float radius,
        bool explosion,
        bool force_play,
        app::UberInteractionActor* actor
    )
    IL2CPP_REGISTER_METHOD(
        0x014EC770,
        void,
        ApplyForce,
        app::PhysicalInteractable* this_ptr,
        app::Vector2 velocity,
        app::Vector3 point,
        app::Vector2 min_force,
        app::FloatRange_1 velocity_filter_x,
        app::FloatRange_1 velocity_filter_y
    )
    IL2CPP_REGISTER_METHOD(
        0x014ECA90,
        bool,
        DoesOverlap,
        app::PhysicalInteractable* this_ptr,
        app::Vector3 position,
        app::Vector3 velocity,
        float interaction_radius,
        float z_scale
    )
    IL2CPP_REGISTER_METHOD(0x00C7C010, app::Vector3, GetPosition, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B68B50, app::Vector3, GetExplodePoint, app::PhysicalInteractable* this_ptr, app::Vector3 position)
    IL2CPP_REGISTER_METHOD(0x014ECCC0, void, OnRecieveDamage, app::PhysicalInteractable* this_ptr, app::Damage* damage)
    IL2CPP_REGISTER_METHOD(0x014ECEB0, void, PlaySound, app::PhysicalInteractable* this_ptr, app::Event_1* event)
    IL2CPP_REGISTER_METHOD(0x010CDA20, void, OnDrawGizmosSelected, app::PhysicalInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014ED090, void, ctor, app::PhysicalInteractable* this_ptr)
} // namespace app::classes::PhysicalInteractable
