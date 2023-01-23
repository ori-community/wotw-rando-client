#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_DEFINED)
#include <Modloader/app/structs/MoonTimelineNotifier_Action__Enum.h>
#if defined(IL2CPP_STRUCT_MoonTimelineNotifier_Action__Enum_DEFINED)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_DEFINED
struct ITimelineEntity;
struct IContext;
struct GhostTimelineEventsPlugin_PendingEvent {
    struct ITimelineEntity* Entity;
    struct IContext* Context;
    MoonTimelineNotifier_Action__Enum Action;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_FWDDECL)
#define IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_FWDDECL
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/ITimelineEntity.h>
#endif
#undef IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_DEFINED) && !defined(IL2CPP_STRUCT_GhostTimelineEventsPlugin_PendingEvent_FWDDECL)
#include <Modloader/app/structs/GhostTimelineEventsPlugin_PendingEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostTimelineEventsPlugin_PendingEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
