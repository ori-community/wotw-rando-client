#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayExternalTimelineAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayExternalTimelineAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayExternalTimelineAction_DEFINED)
#include <Modloader/app/structs/PlayExternalTimelineAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlayExternalTimelineAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayExternalTimelineAction_DEFINED
struct PlayExternalTimelineAction__Class;
struct PlayExternalTimelineAction {
    struct PlayExternalTimelineAction__Class* klass;
    MonitorData* monitor;
    struct PlayExternalTimelineAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayExternalTimelineAction_FWDDECL)
#define IL2CPP_STRUCT_PlayExternalTimelineAction_FWDDECL
#include <Modloader/app/structs/PlayExternalTimelineAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayExternalTimelineAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayExternalTimelineAction_DEFINED) && !defined(IL2CPP_STRUCT_PlayExternalTimelineAction_FWDDECL)
#include <Modloader/app/structs/PlayExternalTimelineAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayExternalTimelineAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
