#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/MinerSpawnType__Enum.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_MinerSpawnType__Enum_DEFINED)
#define IL2CPP_STRUCT_MinerEntity__Fields_DEFINED
struct EnemyShield;
struct Transform;
struct GroundEntityMovementProcessor;
struct GroundEntityLocomotion;
struct CharacterPlatformMovement;
struct MinerEntity__Fields {
    struct EnemyEntity__Fields _;
    MinerSpawnType__Enum _SpawnType_k__BackingField;

    struct EnemyShield* Shield;
    bool MoveTowardsTargetIfAggro;
    bool DoPerspectiveCorrection;
    struct Transform* m_perspectiveCorrectionNode;
    struct GroundEntityMovementProcessor* m_movementProcessor;
    struct GroundEntityLocomotion* m_locomotion;
    struct CharacterPlatformMovement* m_platformMovemt;
    int32_t m_GoThroughPlatformUpdateCounter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerEntity__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/EnemyShield.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MinerEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerEntity__Fields_FWDDECL)
#include <Modloader/app/structs/MinerEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
