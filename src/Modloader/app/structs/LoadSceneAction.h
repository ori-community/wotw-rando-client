#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadSceneAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadSceneAction_DEFINED)
#include <Modloader/app/structs/LoadSceneAction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadSceneAction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadSceneAction_DEFINED
struct LoadSceneAction__Class;
struct LoadSceneAction {
    struct LoadSceneAction__Class* klass;
    MonitorData* monitor;
    struct LoadSceneAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadSceneAction_FWDDECL)
#define IL2CPP_STRUCT_LoadSceneAction_FWDDECL
#include <Modloader/app/structs/LoadSceneAction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadSceneAction_DEFINED) && !defined(IL2CPP_STRUCT_LoadSceneAction_FWDDECL)
#include <Modloader/app/structs/LoadSceneAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadSceneAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
