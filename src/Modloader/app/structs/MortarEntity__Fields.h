#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_MortarEntity__Fields_DEFINED
struct Transform;
struct MortarSpitAttackSettings;
struct ILocomotionTurningHandler;
struct LocomotionIdleBehaviour;
struct MoonTimeline;
struct MortarEntity_AimVeloCache;
struct MortarEntity__Fields {
    struct EnemyEntity__Fields _;
    struct Transform* SpitUpProjectilePosition;
    struct Transform* SpitForwardProjectilePosition;
    struct MortarSpitAttackSettings* SpitAttackSettings;
    bool m_detectedGroundSurface;
    struct Vector3 SpitAttackLaunchVelocity;
    bool CanTurn;
    bool m_spitVelocityUpdateWouldHitTarget;
    bool m_shouldCharge;
    bool m_shouldHide;
    struct ILocomotionTurningHandler* m_turningHandler;
    bool MortarHidden;
    struct LocomotionIdleBehaviour* LocomotionIdleBehaviour;
    struct MoonTimeline* IdleTimeline;
    struct MoonTimeline* HiddenTimeline;
    bool _SpawnCreep_k__BackingField;
    bool DebugCacheGrid;
    struct MortarEntity_AimVeloCache* m_aimVeloCache;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarEntity__Fields_FWDDECL
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/LocomotionIdleBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MortarEntity_AimVeloCache.h>
#include <Modloader/app/structs/MortarSpitAttackSettings.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MortarEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarEntity__Fields_FWDDECL)
#include <Modloader/app/structs/MortarEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
