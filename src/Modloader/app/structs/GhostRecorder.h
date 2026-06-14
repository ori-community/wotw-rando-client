#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostRecorder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorder_DEFINED)
#include <Modloader/app/structs/GhostRecorder__Fields.h>
#if defined(IL2CPP_STRUCT_GhostRecorder__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostRecorder_DEFINED
struct GhostRecorder__Class;
struct GhostRecorder {
    struct GhostRecorder__Class* klass;
    MonitorData* monitor;
    struct GhostRecorder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostRecorder_FWDDECL)
#define IL2CPP_STRUCT_GhostRecorder_FWDDECL
#include <Modloader/app/structs/GhostRecorder__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecorder_DEFINED) && !defined(IL2CPP_STRUCT_GhostRecorder_FWDDECL)
#include <Modloader/app/structs/GhostRecorder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostRecorder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
