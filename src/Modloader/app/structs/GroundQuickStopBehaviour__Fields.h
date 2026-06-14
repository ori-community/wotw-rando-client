#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_DEFINED
struct GroundEntityLocomotion;
struct GroundQuickStopBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    float DeccelerationRate;
    struct GroundEntityLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundQuickStopBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GroundQuickStopBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundQuickStopBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
