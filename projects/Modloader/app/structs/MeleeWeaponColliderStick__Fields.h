#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_UpdateType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_DEFINED
struct Transform;
struct Action_2_UnityEngine_Collider_UnityEngine_Vector3_;
struct Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_;
struct Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_;
struct Queue_1_MeleeWeaponColliderStick_DebugCircle_;
struct Collider__Array;
struct MeleePositionInterpolator;
struct RaycastHit__Array;
struct Entity;
struct SeinCharacter;
struct GroundEntityLocomotion;
struct __declspec(align(8)) MeleeWeaponColliderStick__Fields {
    bool InstanceWeaponColliderDebugEnabled;
    struct Transform* WeaponBase;
    struct Transform* WeaponTop;
    float Radius;
    float GroundCollisionOffset;
    float InterpolationStepDistanceMultiplier;
    struct LayerMask Mask_1;
    float RecoilRadius;
    struct LayerMask RecoilMask;
    float RecoilColliderMinGroundDistance;
    struct Action_2_UnityEngine_Collider_UnityEngine_Vector3_* OnCollision;
    struct Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_* OnCollisionWithDirection;
    struct Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_* OnGroundCollision;
    struct Action_2_UnityEngine_Collider_UnityEngine_Vector3_* OnRecoilCollision;
    float m_debugTimer;
    struct Queue_1_MeleeWeaponColliderStick_DebugCircle_* m_inactiveCircles;
    struct Queue_1_MeleeWeaponColliderStick_DebugCircle_* m_activeCircles;
    struct Collider__Array* m_tempColliders;
    UpdateType__Enum m_updateType;

    bool m_registered;
    struct MeleePositionInterpolator* m_positionInterpolator;
    bool m_enabled;
    struct RaycastHit__Array* m_recoilHits;
    struct Entity* m_entity;
    struct SeinCharacter* m_seinCharacter;
    struct GroundEntityLocomotion* m_ownerLocomotion;
    bool m_triedGettingEntity;
    bool m_triedGettingSeinCharacter;
    struct Vector3 m_previousWeaponTopPosition;
    bool m_firstFrameEnabled;
    bool _DoGroundChecksAlongWeaponLength_k__BackingField;
    struct Vector3 m_previousAdjustedWeaponTop;
    struct Vector3 m_previousAdjustedWeaponBase;
    float m_duration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_UnityEngine_Collider_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Action_4_UnityEngine_Collider_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Action_4_UnityEngine_Vector3_UnityEngine_Vector3_UnityEngine_Vector3_SurfaceMaterialType_.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MeleePositionInterpolator.h>
#include <Modloader/app/structs/Queue_1_MeleeWeaponColliderStick_DebugCircle_.h>
#include <Modloader/app/structs/RaycastHit__Array.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeWeaponColliderStick__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeWeaponColliderStick__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeWeaponColliderStick__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
