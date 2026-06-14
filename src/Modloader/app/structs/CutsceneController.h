#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneController_DEFINED)
#include <Modloader/app/structs/CutsceneController__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneController__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneController_DEFINED
struct CutsceneController__Class;
struct CutsceneController {
    struct CutsceneController__Class* klass;
    MonitorData* monitor;
    struct CutsceneController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneController_FWDDECL)
#define IL2CPP_STRUCT_CutsceneController_FWDDECL
#include <Modloader/app/structs/CutsceneController__Class.h>
#endif
#undef IL2CPP_STRUCT_CutsceneController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneController_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneController_FWDDECL)
#include <Modloader/app/structs/CutsceneController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
