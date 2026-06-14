#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_DEFINED)
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_DEFINED
struct GhostRecordingMetaDataPlugin__Class;
struct GhostRecordingMetaDataPlugin {
    struct GhostRecordingMetaDataPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostRecordingMetaDataPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_FWDDECL
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostRecordingMetaDataPlugin_FWDDECL)
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostRecordingMetaDataPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
