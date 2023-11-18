#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChaseBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaseBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ChaseBehaviour__Fields_DEFINED
struct Locomotion;
struct GameObject;
struct ChaseBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    float TraversalSpeed;
    struct Locomotion* m_locomotion;
    struct GameObject* m_chaseTarget;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChaseBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChaseBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Locomotion.h>
#endif
#undef IL2CPP_STRUCT_ChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaseBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChaseBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/ChaseBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChaseBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
