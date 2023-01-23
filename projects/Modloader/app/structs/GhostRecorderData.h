#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostRecorderData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostRecorderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorderData_DEFINED)
#include <Modloader/app/structs/GhostRecorderData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostRecorderData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostRecorderData_DEFINED
struct GhostRecorderData__Class;
struct GhostRecorderData {
    struct GhostRecorderData__Class* klass;
    MonitorData* monitor;
    struct GhostRecorderData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostRecorderData_FWDDECL)
#define IL2CPP_STRUCT_GhostRecorderData_FWDDECL
#include <Modloader/app/structs/GhostRecorderData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostRecorderData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorderData_DEFINED) && !defined(IL2CPP_STRUCT_GhostRecorderData_FWDDECL)
#include <Modloader/app/structs/GhostRecorderData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostRecorderData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
