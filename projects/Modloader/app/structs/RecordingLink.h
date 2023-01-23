#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordingLink_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordingLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingLink_DEFINED)
#include <Modloader/app/structs/RecordingLink__Fields.h>
#if defined(IL2CPP_STRUCT_RecordingLink__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordingLink_DEFINED
struct RecordingLink__Class;
struct RecordingLink {
    struct RecordingLink__Class* klass;
    MonitorData* monitor;
    struct RecordingLink__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordingLink_FWDDECL)
#define IL2CPP_STRUCT_RecordingLink_FWDDECL
#include <Modloader/app/structs/RecordingLink__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordingLink_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingLink_DEFINED) && !defined(IL2CPP_STRUCT_RecordingLink_FWDDECL)
#include <Modloader/app/structs/RecordingLink.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordingLink.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
