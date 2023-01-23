#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlockCutsceneAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlockCutsceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockCutsceneAction_DEFINED)
#include <Modloader/app/structs/UnlockCutsceneAction__Fields.h>
#if defined(IL2CPP_STRUCT_UnlockCutsceneAction__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlockCutsceneAction_DEFINED
struct UnlockCutsceneAction__Class;
struct UnlockCutsceneAction {
    struct UnlockCutsceneAction__Class* klass;
    MonitorData* monitor;
    struct UnlockCutsceneAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlockCutsceneAction_FWDDECL)
#define IL2CPP_STRUCT_UnlockCutsceneAction_FWDDECL
#include <Modloader/app/structs/UnlockCutsceneAction__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlockCutsceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockCutsceneAction_DEFINED) && !defined(IL2CPP_STRUCT_UnlockCutsceneAction_FWDDECL)
#include <Modloader/app/structs/UnlockCutsceneAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlockCutsceneAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
