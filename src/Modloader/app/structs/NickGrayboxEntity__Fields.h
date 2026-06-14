#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NickGrayboxEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NickGrayboxEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickGrayboxEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_NickGrayboxEntity__Fields_DEFINED
struct GroundEntityMovementProcessor;
struct GroundEntityLocomotion;
struct NickGrayboxEntity__Fields {
    struct EnemyEntity__Fields _;
    struct GroundEntityMovementProcessor* m_movementProcessor;
    struct GroundEntityLocomotion* m_locomotion;
    bool MoveTowardsTargetIfAggro;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NickGrayboxEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_NickGrayboxEntity__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#endif
#undef IL2CPP_STRUCT_NickGrayboxEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickGrayboxEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NickGrayboxEntity__Fields_FWDDECL)
#include <Modloader/app/structs/NickGrayboxEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NickGrayboxEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
