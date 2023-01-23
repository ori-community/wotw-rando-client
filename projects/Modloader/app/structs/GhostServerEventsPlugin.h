#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostServerEventsPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_DEFINED)
#include <Modloader/app/structs/GhostServerEventsPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostServerEventsPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_DEFINED
struct GhostServerEventsPlugin__Class;
struct GhostServerEventsPlugin {
    struct GhostServerEventsPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostServerEventsPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_FWDDECL
#include <Modloader/app/structs/GhostServerEventsPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostServerEventsPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_FWDDECL)
#include <Modloader/app/structs/GhostServerEventsPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostServerEventsPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
