#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityPhysicsAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityPhysicsAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPhysicsAnimator_DEFINED)
#include <Modloader/app/structs/EntityPhysicsAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_EntityPhysicsAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityPhysicsAnimator_DEFINED
struct EntityPhysicsAnimator__Class;
struct EntityPhysicsAnimator {
    struct EntityPhysicsAnimator__Class* klass;
    MonitorData* monitor;
    struct EntityPhysicsAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityPhysicsAnimator_FWDDECL)
#define IL2CPP_STRUCT_EntityPhysicsAnimator_FWDDECL
#include <Modloader/app/structs/EntityPhysicsAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityPhysicsAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityPhysicsAnimator_DEFINED) && !defined(IL2CPP_STRUCT_EntityPhysicsAnimator_FWDDECL)
#include <Modloader/app/structs/EntityPhysicsAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityPhysicsAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
