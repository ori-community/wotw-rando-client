#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoToSceneController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoToSceneController_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoToSceneController_DEFINED)
#include <Modloader/app/structs/GoToSceneController__Fields.h>
#if defined(IL2CPP_STRUCT_GoToSceneController__Fields_DEFINED)
#define IL2CPP_STRUCT_GoToSceneController_DEFINED
struct GoToSceneController__Class;
struct GoToSceneController {
    struct GoToSceneController__Class* klass;
    MonitorData* monitor;
    struct GoToSceneController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GoToSceneController_FWDDECL)
#define IL2CPP_STRUCT_GoToSceneController_FWDDECL
#include <Modloader/app/structs/GoToSceneController__Class.h>
#endif
#undef IL2CPP_STRUCT_GoToSceneController_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoToSceneController_DEFINED) && !defined(IL2CPP_STRUCT_GoToSceneController_FWDDECL)
#include <Modloader/app/structs/GoToSceneController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoToSceneController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
