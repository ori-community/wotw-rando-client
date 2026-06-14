#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTarget_DEFINED)
#include <Modloader/app/structs/TentacleTarget__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleTarget_DEFINED
struct TentacleTarget__Class;
struct TentacleTarget {
    struct TentacleTarget__Class* klass;
    MonitorData* monitor;
    struct TentacleTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleTarget_FWDDECL)
#define IL2CPP_STRUCT_TentacleTarget_FWDDECL
#include <Modloader/app/structs/TentacleTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTarget_DEFINED) && !defined(IL2CPP_STRUCT_TentacleTarget_FWDDECL)
#include <Modloader/app/structs/TentacleTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
