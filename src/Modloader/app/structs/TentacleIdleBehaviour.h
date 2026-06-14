#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleIdleBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleIdleBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleIdleBehaviour_DEFINED)
#include <Modloader/app/structs/TentacleIdleBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleIdleBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleIdleBehaviour_DEFINED
struct TentacleIdleBehaviour__Class;
struct TentacleIdleBehaviour {
    struct TentacleIdleBehaviour__Class* klass;
    MonitorData* monitor;
    struct TentacleIdleBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleIdleBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TentacleIdleBehaviour_FWDDECL
#include <Modloader/app/structs/TentacleIdleBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleIdleBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleIdleBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TentacleIdleBehaviour_FWDDECL)
#include <Modloader/app/structs/TentacleIdleBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleIdleBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
