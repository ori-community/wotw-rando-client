#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostGenericEventsPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_DEFINED)
#include <Modloader/app/structs/GhostGenericEventsPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_GhostGenericEventsPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_DEFINED
struct GhostGenericEventsPlugin__Class;
struct GhostGenericEventsPlugin {
    struct GhostGenericEventsPlugin__Class* klass;
    MonitorData* monitor;
    struct GhostGenericEventsPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_FWDDECL)
#define IL2CPP_STRUCT_GhostGenericEventsPlugin_FWDDECL
#include <Modloader/app/structs/GhostGenericEventsPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostGenericEventsPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_DEFINED) && !defined(IL2CPP_STRUCT_GhostGenericEventsPlugin_FWDDECL)
#include <Modloader/app/structs/GhostGenericEventsPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostGenericEventsPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
