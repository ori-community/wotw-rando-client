#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_DEFINED
struct IgnoreGoThroughPlatforms;
struct PlatformMovement;
struct DamageDealer;
struct VolumeEntityMovementProcessor;
struct HitProtection;
struct VolumeEntityLocomotion;
struct Transform;
struct MudkisserGrayboxEntity__Fields {
    struct EnemyEntity__Fields _;
    struct IgnoreGoThroughPlatforms* m_ignoreGoThroughs;
    struct PlatformMovement* m_platformMovement;
    struct DamageDealer* m_touchDamage;
    struct VolumeEntityMovementProcessor* m_movementProcessor;
    float Offset;
    struct HitProtection* HitProtection;
    bool m_wasLocomotionPaused;
    struct VolumeEntityLocomotion* m_locomotion;
    bool MoveTowardsTargetIfAggro;
    struct Transform* Rotation;
    bool m_flopping;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/HitProtection.h>
#include <Modloader/app/structs/IgnoreGoThroughPlatforms.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#include <Modloader/app/structs/VolumeEntityMovementProcessor.h>
#endif
#undef IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MudkisserGrayboxEntity__Fields_FWDDECL)
#include <Modloader/app/structs/MudkisserGrayboxEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MudkisserGrayboxEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
