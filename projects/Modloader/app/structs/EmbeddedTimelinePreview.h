#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EmbeddedTimelinePreview_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EmbeddedTimelinePreview_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmbeddedTimelinePreview_DEFINED)
#include <Modloader/app/structs/EmbeddedTimelinePreview__Fields.h>
#if defined(IL2CPP_STRUCT_EmbeddedTimelinePreview__Fields_DEFINED)
#define IL2CPP_STRUCT_EmbeddedTimelinePreview_DEFINED
struct EmbeddedTimelinePreview__Class;
struct EmbeddedTimelinePreview {
    struct EmbeddedTimelinePreview__Class* klass;
    MonitorData* monitor;
    struct EmbeddedTimelinePreview__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EmbeddedTimelinePreview_FWDDECL)
#define IL2CPP_STRUCT_EmbeddedTimelinePreview_FWDDECL
#include <Modloader/app/structs/EmbeddedTimelinePreview__Class.h>
#endif
#undef IL2CPP_STRUCT_EmbeddedTimelinePreview_INITIALIZING
#if !defined(IL2CPP_STRUCT_EmbeddedTimelinePreview_DEFINED) && !defined(IL2CPP_STRUCT_EmbeddedTimelinePreview_FWDDECL)
#include <Modloader/app/structs/EmbeddedTimelinePreview.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EmbeddedTimelinePreview.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
