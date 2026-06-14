#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderTimelineManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderTimelineManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderTimelineManager_DEFINED)
#include <Modloader/app/structs/RecorderTimelineManager__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderTimelineManager__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderTimelineManager_DEFINED
struct RecorderTimelineManager__Class;
struct RecorderTimelineManager {
    struct RecorderTimelineManager__Class* klass;
    MonitorData* monitor;
    struct RecorderTimelineManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderTimelineManager_FWDDECL)
#define IL2CPP_STRUCT_RecorderTimelineManager_FWDDECL
#include <Modloader/app/structs/RecorderTimelineManager__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderTimelineManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderTimelineManager_DEFINED) && !defined(IL2CPP_STRUCT_RecorderTimelineManager_FWDDECL)
#include <Modloader/app/structs/RecorderTimelineManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderTimelineManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
