#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostTimelineEventsPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_DEFINED)
#include <Modloader/app/structs/GhostTimelineEventsPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_DEFINED
struct GhostTimelineEventsPlugin__Class;
struct GhostTimelineEventsPlugin {
    struct GhostTimelineEventsPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostTimelineEventsPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_FWDDECL
#include <Modloader/app/structs/GhostTimelineEventsPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostTimelineEventsPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_FWDDECL)
#include <Modloader/app/structs/GhostTimelineEventsPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostTimelineEventsPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
