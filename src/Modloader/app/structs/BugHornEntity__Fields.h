#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BugHornEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BugHornEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugHornEntity__Fields_DEFINED)
#include <Modloader/app/structs/BugHornEntity_LocomotionMode__Enum.h>
#include <Modloader/app/structs/BugHornEntity_SlamChargeType__Enum.h>
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_BugHornEntity_SlamChargeType__Enum_DEFINED) && defined(IL2CPP_STRUCT_BugHornEntity_LocomotionMode__Enum_DEFINED)
#define IL2CPP_STRUCT_BugHornEntity__Fields_DEFINED
struct Locomotion;
struct RammingBehaviour;
struct FlutteringProjectileDropBehaviour;
struct FlutteringSlamBehaviour;
struct MaterialBasedHornBugEffectsMap;
struct Transform;
struct EnemyShield;
struct BugHornEntity__Fields {
    struct EnemyEntity__Fields _;
    struct Locomotion* GroundLocomotion;
    struct Locomotion* AirLocomotion;
    struct RammingBehaviour* RammingBehaviour;
    struct FlutteringProjectileDropBehaviour* ProjectileDropBehaviour;
    struct FlutteringSlamBehaviour* FlutteringSlamBehaviour;
    struct MaterialBasedHornBugEffectsMap* Effects;
    bool DamageAreaDebug;
    struct Transform* DamageAreaOriginTransform;
    struct Transform* DamageAreaTargetTransform;
    float DamageAreaAngle;
    BugHornEntity_SlamChargeType__Enum SlamType;

    float MaxVerticalOffset;
    int32_t AdditionalSideChargeEffects;
    float ZoneSeparation;
    struct Transform* SlamChargeEffectRoot;
    struct Transform* ShatterEffectTransform;
    struct EnemyShield* Shield;
    bool m_canFlutter;
    BugHornEntity_LocomotionMode__Enum m_locomotionMode;

    bool m_wasFLutteringInterrupted;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BugHornEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_BugHornEntity__Fields_FWDDECL
#include <Modloader/app/structs/EnemyShield.h>
#include <Modloader/app/structs/FlutteringProjectileDropBehaviour.h>
#include <Modloader/app/structs/FlutteringSlamBehaviour.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MaterialBasedHornBugEffectsMap.h>
#include <Modloader/app/structs/RammingBehaviour.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_BugHornEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BugHornEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BugHornEntity__Fields_FWDDECL)
#include <Modloader/app/structs/BugHornEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BugHornEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
