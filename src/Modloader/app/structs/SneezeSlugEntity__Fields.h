#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugEntity__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/GroundMovingEntity__Fields.h>
#include <Modloader/app/structs/SneezeSlugEntity_HitProtectionState__Enum.h>
#if defined(IL2CPP_STRUCT_GroundMovingEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_SneezeSlugEntity_HitProtectionState__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugEntity__Fields_DEFINED
struct FloatAnimationParameter;
struct List_1_UnityEngine_Vector3_;
struct Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_;
struct Object;
struct IgnoreGoThroughPlatforms;
struct PlatformMovement;
struct DamageDealer;
struct SneezeSlugEntity__Fields {
    struct GroundMovingEntity__Fields _;
    bool isOnScreen;
    float onScreenDelay;
    struct FloatAnimationParameter* IsBurrowedParam;
    float MaxTimeBetweenHits;
    int32_t HitsToTriggerBurrow;
    float m_onScreenTime;
    bool m_isBurrowed;
    float m_startingSneezingSpeed;
    float m_startingSneezingCooldown;
    bool m_canReachUnburrowPoint;
    int32_t m_ticksToCanReachUnburrowPointCheck;
    float m_lastRegisteredHitTime;
    int32_t m_hitCount;
    bool m_forceBurrow;
    struct List_1_UnityEngine_Vector3_* m_unburrowPoints;
    struct Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_* m_protectionStateGuard;
    SneezeSlugEntity_HitProtectionState__Enum DefaultProtectionState;

    SneezeSlugEntity_HitProtectionState__Enum m_protectionState;

    struct Object* m_protector;
    float m_vulnerabilityTimer;
    float m_invulnerabilityTimer;
    DamageWeight__Enum m_defaultTouchDamageWeight;

    struct IgnoreGoThroughPlatforms* m_ignoreGoThroughs;
    struct PlatformMovement* m_platformMovement;
    struct DamageDealer* m_hitbox;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugEntity__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/Dictionary_2_System_Object_SneezeSlugEntity_HitProtectionState_.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/IgnoreGoThroughPlatforms.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/PlatformMovement.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
