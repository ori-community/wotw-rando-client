#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostRecordingMetaDataData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostRecordingMetaDataData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataData_DEFINED)
#include <Modloader/app/structs/GhostRecordingMetaDataData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostRecordingMetaDataData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostRecordingMetaDataData_DEFINED
struct GhostRecordingMetaDataData__Class;
struct GhostRecordingMetaDataData {
    struct GhostRecordingMetaDataData__Class* klass;
    MonitorData* monitor;
    struct GhostRecordingMetaDataData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataData_FWDDECL)
#define IL2CPP_STRUCT_GhostRecordingMetaDataData_FWDDECL
#include <Modloader/app/structs/GhostRecordingMetaDataData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostRecordingMetaDataData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataData_DEFINED) && !defined(IL2CPP_STRUCT_GhostRecordingMetaDataData_FWDDECL)
#include <Modloader/app/structs/GhostRecordingMetaDataData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostRecordingMetaDataData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
