#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleHead_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleHead_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleHead_DEFINED)
#include <Modloader/app/structs/TentacleHead__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleHead__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleHead_DEFINED
struct TentacleHead__Class;
struct TentacleHead {
    struct TentacleHead__Class* klass;
    MonitorData* monitor;
    struct TentacleHead__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleHead_FWDDECL)
#define IL2CPP_STRUCT_TentacleHead_FWDDECL
#include <Modloader/app/structs/TentacleHead__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleHead_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleHead_DEFINED) && !defined(IL2CPP_STRUCT_TentacleHead_FWDDECL)
#include <Modloader/app/structs/TentacleHead.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleHead.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
