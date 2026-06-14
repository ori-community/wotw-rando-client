#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnlockFinishLoadingAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnlockFinishLoadingAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockFinishLoadingAction_DEFINED)
#include <Modloader/app/structs/UnlockFinishLoadingAction__Fields.h>
#if defined(IL2CPP_STRUCT_UnlockFinishLoadingAction__Fields_DEFINED)
#define IL2CPP_STRUCT_UnlockFinishLoadingAction_DEFINED
struct UnlockFinishLoadingAction__Class;
struct UnlockFinishLoadingAction {
    struct UnlockFinishLoadingAction__Class* klass;
    MonitorData* monitor;
    struct UnlockFinishLoadingAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnlockFinishLoadingAction_FWDDECL)
#define IL2CPP_STRUCT_UnlockFinishLoadingAction_FWDDECL
#include <Modloader/app/structs/UnlockFinishLoadingAction__Class.h>
#endif
#undef IL2CPP_STRUCT_UnlockFinishLoadingAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnlockFinishLoadingAction_DEFINED) && !defined(IL2CPP_STRUCT_UnlockFinishLoadingAction_FWDDECL)
#include <Modloader/app/structs/UnlockFinishLoadingAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnlockFinishLoadingAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
