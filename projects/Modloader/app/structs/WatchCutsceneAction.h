#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WatchCutsceneAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WatchCutsceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WatchCutsceneAction_DEFINED)
#include <Modloader/app/structs/WatchCutsceneAction__Fields.h>
#if defined(IL2CPP_STRUCT_WatchCutsceneAction__Fields_DEFINED)
#define IL2CPP_STRUCT_WatchCutsceneAction_DEFINED
struct WatchCutsceneAction__Class;
struct WatchCutsceneAction {
    struct WatchCutsceneAction__Class* klass;
    MonitorData* monitor;
    struct WatchCutsceneAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WatchCutsceneAction_FWDDECL)
#define IL2CPP_STRUCT_WatchCutsceneAction_FWDDECL
#include <Modloader/app/structs/WatchCutsceneAction__Class.h>
#endif
#undef IL2CPP_STRUCT_WatchCutsceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_WatchCutsceneAction_DEFINED) && !defined(IL2CPP_STRUCT_WatchCutsceneAction_FWDDECL)
#include <Modloader/app/structs/WatchCutsceneAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WatchCutsceneAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
