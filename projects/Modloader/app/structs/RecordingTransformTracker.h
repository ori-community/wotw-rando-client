#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecordingTransformTracker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecordingTransformTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingTransformTracker_DEFINED)
#include <Modloader/app/structs/RecordingTransformTracker__Fields.h>
#if defined(IL2CPP_STRUCT_RecordingTransformTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_RecordingTransformTracker_DEFINED
struct RecordingTransformTracker__Class;
struct RecordingTransformTracker {
    struct RecordingTransformTracker__Class* klass;
    MonitorData* monitor;
    struct RecordingTransformTracker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecordingTransformTracker_FWDDECL)
#define IL2CPP_STRUCT_RecordingTransformTracker_FWDDECL
#include <Modloader/app/structs/RecordingTransformTracker__Class.h>
#endif
#undef IL2CPP_STRUCT_RecordingTransformTracker_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecordingTransformTracker_DEFINED) && !defined(IL2CPP_STRUCT_RecordingTransformTracker_FWDDECL)
#include <Modloader/app/structs/RecordingTransformTracker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecordingTransformTracker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
