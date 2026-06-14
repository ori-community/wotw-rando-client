#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneScreenController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneScreenController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneScreenController_DEFINED)
#include <Modloader/app/structs/CutsceneScreenController__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneScreenController__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneScreenController_DEFINED
struct CutsceneScreenController__Class;
struct CutsceneScreenController {
    struct CutsceneScreenController__Class* klass;
    MonitorData* monitor;
    struct CutsceneScreenController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneScreenController_FWDDECL)
#define IL2CPP_STRUCT_CutsceneScreenController_FWDDECL
#include <Modloader/app/structs/CutsceneScreenController__Class.h>
#endif
#undef IL2CPP_STRUCT_CutsceneScreenController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneScreenController_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneScreenController_FWDDECL)
#include <Modloader/app/structs/CutsceneScreenController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneScreenController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
