#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmFollowPathBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmFollowPathBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour_DEFINED)
#include <Modloader/app/structs/SwarmFollowPathBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SwarmFollowPathBehaviour_DEFINED
struct SwarmFollowPathBehaviour__Class;
struct SwarmFollowPathBehaviour {
    struct SwarmFollowPathBehaviour__Class* klass;
    MonitorData* monitor;
    struct SwarmFollowPathBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour_FWDDECL)
#define IL2CPP_STRUCT_SwarmFollowPathBehaviour_FWDDECL
#include <Modloader/app/structs/SwarmFollowPathBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_SwarmFollowPathBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_SwarmFollowPathBehaviour_FWDDECL)
#include <Modloader/app/structs/SwarmFollowPathBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmFollowPathBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
