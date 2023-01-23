#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleSpitBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleSpitBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleSpitBehaviour_DEFINED)
#include <Modloader/app/structs/TentacleSpitBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleSpitBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleSpitBehaviour_DEFINED
struct TentacleSpitBehaviour__Class;
struct TentacleSpitBehaviour {
    struct TentacleSpitBehaviour__Class* klass;
    MonitorData* monitor;
    struct TentacleSpitBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleSpitBehaviour_FWDDECL)
#define IL2CPP_STRUCT_TentacleSpitBehaviour_FWDDECL
#include <Modloader/app/structs/TentacleSpitBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleSpitBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleSpitBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_TentacleSpitBehaviour_FWDDECL)
#include <Modloader/app/structs/TentacleSpitBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleSpitBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
