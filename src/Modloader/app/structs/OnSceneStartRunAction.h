#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnSceneStartRunAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnSceneStartRunAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSceneStartRunAction_DEFINED)
#include <Modloader/app/structs/OnSceneStartRunAction__Fields.h>
#if defined(IL2CPP_STRUCT_OnSceneStartRunAction__Fields_DEFINED)
#define IL2CPP_STRUCT_OnSceneStartRunAction_DEFINED
struct OnSceneStartRunAction__Class;
struct OnSceneStartRunAction {
    struct OnSceneStartRunAction__Class* klass;
    MonitorData* monitor;
    struct OnSceneStartRunAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnSceneStartRunAction_FWDDECL)
#define IL2CPP_STRUCT_OnSceneStartRunAction_FWDDECL
#include <Modloader/app/structs/OnSceneStartRunAction__Class.h>
#endif
#undef IL2CPP_STRUCT_OnSceneStartRunAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnSceneStartRunAction_DEFINED) && !defined(IL2CPP_STRUCT_OnSceneStartRunAction_FWDDECL)
#include <Modloader/app/structs/OnSceneStartRunAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnSceneStartRunAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
