#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostReplayMetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostReplayMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostReplayMetaData_DEFINED)
#include <Modloader/app/structs/GhostReplayMetaData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostReplayMetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostReplayMetaData_DEFINED
struct GhostReplayMetaData__Class;
struct GhostReplayMetaData {
    struct GhostReplayMetaData__Class* klass;
    MonitorData* monitor;
    struct GhostReplayMetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostReplayMetaData_FWDDECL)
#define IL2CPP_STRUCT_GhostReplayMetaData_FWDDECL
#include <Modloader/app/structs/GhostReplayMetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostReplayMetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostReplayMetaData_DEFINED) && !defined(IL2CPP_STRUCT_GhostReplayMetaData_FWDDECL)
#include <Modloader/app/structs/GhostReplayMetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostReplayMetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
