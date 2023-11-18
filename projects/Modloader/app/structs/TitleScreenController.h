#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleScreenController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleScreenController_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenController_DEFINED)
#include <Modloader/app/structs/TitleScreenController__Fields.h>
#if defined(IL2CPP_STRUCT_TitleScreenController__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleScreenController_DEFINED
struct TitleScreenController__Class;
struct TitleScreenController {
    struct TitleScreenController__Class* klass;
    MonitorData* monitor;
    struct TitleScreenController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleScreenController_FWDDECL)
#define IL2CPP_STRUCT_TitleScreenController_FWDDECL
#include <Modloader/app/structs/TitleScreenController__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleScreenController_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenController_DEFINED) && !defined(IL2CPP_STRUCT_TitleScreenController_FWDDECL)
#include <Modloader/app/structs/TitleScreenController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleScreenController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
