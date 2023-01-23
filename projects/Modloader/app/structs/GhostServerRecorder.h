#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostServerRecorder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostServerRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerRecorder_DEFINED)
#include <Modloader/app/structs/GhostServerRecorder__Fields.h>
#if defined(IL2CPP_STRUCT_GhostServerRecorder__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostServerRecorder_DEFINED
struct GhostServerRecorder__Class;
struct GhostServerRecorder {
    struct GhostServerRecorder__Class* klass;
    MonitorData* monitor;
    struct GhostServerRecorder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostServerRecorder_FWDDECL)
#define IL2CPP_STRUCT_GhostServerRecorder_FWDDECL
#include <Modloader/app/structs/GhostServerRecorder__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostServerRecorder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerRecorder_DEFINED) && !defined(IL2CPP_STRUCT_GhostServerRecorder_FWDDECL)
#include <Modloader/app/structs/GhostServerRecorder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostServerRecorder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
