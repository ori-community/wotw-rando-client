#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayTimelineAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayTimelineAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayTimelineAction_DEFINED)
#include <Modloader/app/structs/PlayTimelineAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlayTimelineAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayTimelineAction_DEFINED
struct PlayTimelineAction__Class;
struct PlayTimelineAction {
    struct PlayTimelineAction__Class* klass;
    MonitorData* monitor;
    struct PlayTimelineAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayTimelineAction_FWDDECL)
#define IL2CPP_STRUCT_PlayTimelineAction_FWDDECL
#include <Modloader/app/structs/PlayTimelineAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayTimelineAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayTimelineAction_DEFINED) && !defined(IL2CPP_STRUCT_PlayTimelineAction_FWDDECL)
#include <Modloader/app/structs/PlayTimelineAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayTimelineAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
