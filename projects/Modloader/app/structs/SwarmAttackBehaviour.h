#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmAttackBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmAttackBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAttackBehaviour_DEFINED)
#include <Modloader/app/structs/SwarmAttackBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmAttackBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmAttackBehaviour_DEFINED
struct SwarmAttackBehaviour__Class;
struct SwarmAttackBehaviour {
    struct SwarmAttackBehaviour__Class* klass;
    MonitorData* monitor;
    struct SwarmAttackBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmAttackBehaviour_FWDDECL)
#define IL2CPP_STRUCT_SwarmAttackBehaviour_FWDDECL
#include <Modloader/app/structs/SwarmAttackBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmAttackBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAttackBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_SwarmAttackBehaviour_FWDDECL)
#include <Modloader/app/structs/SwarmAttackBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmAttackBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
