#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISkipCutsceneAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISkipCutsceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISkipCutsceneAction_DEFINED)
#define IL2CPP_STRUCT_ISkipCutsceneAction_DEFINED
struct ISkipCutsceneAction__Class;
struct ISkipCutsceneAction {
    struct ISkipCutsceneAction__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISkipCutsceneAction_FWDDECL)
#define IL2CPP_STRUCT_ISkipCutsceneAction_FWDDECL
#include <Modloader/app/structs/ISkipCutsceneAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ISkipCutsceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISkipCutsceneAction_DEFINED) && !defined(IL2CPP_STRUCT_ISkipCutsceneAction_FWDDECL)
#include <Modloader/app/structs/ISkipCutsceneAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISkipCutsceneAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
