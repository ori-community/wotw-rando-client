#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmTargetingBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmTargetingBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmTargetingBehaviour_DEFINED)
#include <Modloader/app/structs/SwarmTargetingBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmTargetingBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmTargetingBehaviour_DEFINED
struct SwarmTargetingBehaviour__Class;
struct SwarmTargetingBehaviour {
    struct SwarmTargetingBehaviour__Class* klass;
    MonitorData* monitor;
    struct SwarmTargetingBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmTargetingBehaviour_FWDDECL)
#define IL2CPP_STRUCT_SwarmTargetingBehaviour_FWDDECL
#include <Modloader/app/structs/SwarmTargetingBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmTargetingBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmTargetingBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_SwarmTargetingBehaviour_FWDDECL)
#include <Modloader/app/structs/SwarmTargetingBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmTargetingBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
