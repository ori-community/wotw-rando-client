#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayRandomTimelineAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayRandomTimelineAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayRandomTimelineAction_DEFINED)
#include <Modloader/app/structs/PlayRandomTimelineAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlayRandomTimelineAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayRandomTimelineAction_DEFINED
struct PlayRandomTimelineAction__Class;
struct PlayRandomTimelineAction {
    struct PlayRandomTimelineAction__Class* klass;
    MonitorData* monitor;
    struct PlayRandomTimelineAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayRandomTimelineAction_FWDDECL)
#define IL2CPP_STRUCT_PlayRandomTimelineAction_FWDDECL
#include <Modloader/app/structs/PlayRandomTimelineAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayRandomTimelineAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayRandomTimelineAction_DEFINED) && !defined(IL2CPP_STRUCT_PlayRandomTimelineAction_FWDDECL)
#include <Modloader/app/structs/PlayRandomTimelineAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayRandomTimelineAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
