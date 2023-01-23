#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyShield__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyShield__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyShield__Fields_DEFINED)
#include <Modloader/app/structs/EnemyShield_ShieldForwardMode__Enum.h>
#include <Modloader/app/structs/EnemyShield_State__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_EnemyShield_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_EnemyShield_ShieldForwardMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_EnemyShield__Fields_DEFINED
struct Action;
struct EnemyEntity;
struct List_1_UnityEngine_GameObject_;
struct GameObject;
struct MoonTimeline;
struct Transform;
struct GroundEntityLocomotion;
struct List_1_EntityTargetting_;
struct SphereCollider;
struct EntityTargetting;
struct DamageReceiver;
struct DamageDealer;
struct EnemyShield__Fields {
    struct MonoBehaviour__Fields _;
    struct Action* OnShieldShatteredEvent;
    struct EnemyEntity* Entity;
    struct List_1_UnityEngine_GameObject_* ModelsActiveOnlyWithShield;
    struct GameObject* HitBox;
    struct MoonTimeline* ShatterShieldEffectTimeline;
    struct Transform* ShatterEffectSpawnLocation;
    EnemyShield_State__Enum InitialState;

    struct Transform* ProtectionConeOrigin;
    EnemyShield_ShieldForwardMode__Enum ShieldForward;

    float ProtectionConeLookAngle;
    float ProtectionConeAngle;
    bool ApplyLookDirectionToShieldDirection;
    bool ApplyLookDirectionToShieldRotation;
    float DrawGizmoRadius;
    float ShieldDirectionTreshold;
    struct GroundEntityLocomotion* m_locomotion;
    EnemyShield_State__Enum m_state;

    struct List_1_EntityTargetting_* m_arrowReflectingColliders;
    struct SphereCollider* ImpenetrableRange;
    struct EntityTargetting* m_entityTargetting;
    struct DamageReceiver* m_damageReceiver;
    struct DamageDealer* m_damageDealer;
    float m_sqrShieldDirectionTreshold;
    struct Vector2 m_fallbackShieldDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyShield__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyShield__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/EnemyEntity.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/List_1_EntityTargetting_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EnemyShield__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyShield__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyShield__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyShield__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyShield__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
