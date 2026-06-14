#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_DEFINED)
#include <Modloader/app/structs/RammingBehaviour_RamState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_RammingBehaviour_RamState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_DEFINED
struct CharacterPlatformMovement;
struct GroundEntityMovementProcessor;
struct RammingBehaviour_ChaseState__Fields {
    struct RammingBehaviour_RamState__Fields _;
    struct CharacterPlatformMovement* m_platformMovement;
    float m_defaultDamageDealerDamage;
    struct GroundEntityMovementProcessor* m_groundMoveProcessor;
    struct Vector3 m_brakingPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#endif
#undef IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingBehaviour_ChaseState__Fields_FWDDECL)
#include <Modloader/app/structs/RammingBehaviour_ChaseState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingBehaviour_ChaseState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
