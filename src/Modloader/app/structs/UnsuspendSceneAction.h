#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnsuspendSceneAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnsuspendSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsuspendSceneAction_DEFINED)
#include <Modloader/app/structs/UnsuspendSceneAction__Fields.h>
#if defined(IL2CPP_STRUCT_UnsuspendSceneAction__Fields_DEFINED)
#define IL2CPP_STRUCT_UnsuspendSceneAction_DEFINED
struct UnsuspendSceneAction__Class;
struct UnsuspendSceneAction {
    struct UnsuspendSceneAction__Class* klass;
    MonitorData* monitor;
    struct UnsuspendSceneAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnsuspendSceneAction_FWDDECL)
#define IL2CPP_STRUCT_UnsuspendSceneAction_FWDDECL
#include <Modloader/app/structs/UnsuspendSceneAction__Class.h>
#endif
#undef IL2CPP_STRUCT_UnsuspendSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnsuspendSceneAction_DEFINED) && !defined(IL2CPP_STRUCT_UnsuspendSceneAction_FWDDECL)
#include <Modloader/app/structs/UnsuspendSceneAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnsuspendSceneAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
