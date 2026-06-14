#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_DEFINED)
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData__Fields.h>
#if defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_DEFINED
struct GhostServerEventsPlugin_ServerEventData__Class;
struct GhostServerEventsPlugin_ServerEventData {
    struct GhostServerEventsPlugin_ServerEventData__Class* klass;
    MonitorData* monitor;
    struct GhostServerEventsPlugin_ServerEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_FWDDECL)
#define IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_FWDDECL
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_DEFINED) && !defined(IL2CPP_STRUCT_GhostServerEventsPlugin_ServerEventData_FWDDECL)
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostServerEventsPlugin_ServerEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
