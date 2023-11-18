#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreloadSceneAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreloadSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadSceneAction_DEFINED)
#include <Modloader/app/structs/PreloadSceneAction__Fields.h>
#if defined(IL2CPP_STRUCT_PreloadSceneAction__Fields_DEFINED)
#define IL2CPP_STRUCT_PreloadSceneAction_DEFINED
struct PreloadSceneAction__Class;
struct PreloadSceneAction {
    struct PreloadSceneAction__Class* klass;
    MonitorData* monitor;
    struct PreloadSceneAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreloadSceneAction_FWDDECL)
#define IL2CPP_STRUCT_PreloadSceneAction_FWDDECL
#include <Modloader/app/structs/PreloadSceneAction__Class.h>
#endif
#undef IL2CPP_STRUCT_PreloadSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadSceneAction_DEFINED) && !defined(IL2CPP_STRUCT_PreloadSceneAction_FWDDECL)
#include <Modloader/app/structs/PreloadSceneAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreloadSceneAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
