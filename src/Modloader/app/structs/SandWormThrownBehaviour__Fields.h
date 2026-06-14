#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_DEFINED
struct SandWormLocomotion;
struct SandWormThrownBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    float _Duration_k__BackingField;
    struct SandWormLocomotion* m_locomotion;
    bool m_movingToEdge;
    float m_remainingTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormThrownBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormThrownBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormThrownBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
