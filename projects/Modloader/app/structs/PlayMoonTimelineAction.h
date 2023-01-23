#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayMoonTimelineAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayMoonTimelineAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayMoonTimelineAction_DEFINED)
#include <Modloader/app/structs/PlayMoonTimelineAction__Fields.h>
#if defined(IL2CPP_STRUCT_PlayMoonTimelineAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayMoonTimelineAction_DEFINED
struct PlayMoonTimelineAction__Class;
struct PlayMoonTimelineAction {
    struct PlayMoonTimelineAction__Class* klass;
    MonitorData* monitor;
    struct PlayMoonTimelineAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayMoonTimelineAction_FWDDECL)
#define IL2CPP_STRUCT_PlayMoonTimelineAction_FWDDECL
#include <Modloader/app/structs/PlayMoonTimelineAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayMoonTimelineAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayMoonTimelineAction_DEFINED) && !defined(IL2CPP_STRUCT_PlayMoonTimelineAction_FWDDECL)
#include <Modloader/app/structs/PlayMoonTimelineAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayMoonTimelineAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
