#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SaveGameController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SaveGameController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveGameController_DEFINED)
#include <Modloader/app/structs/SaveGameController__Fields.h>
#if defined(IL2CPP_STRUCT_SaveGameController__Fields_DEFINED)
#define IL2CPP_STRUCT_SaveGameController_DEFINED
struct SaveGameController__Class;
struct SaveGameController {
    struct SaveGameController__Class* klass;
    MonitorData* monitor;
    struct SaveGameController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SaveGameController_FWDDECL)
#define IL2CPP_STRUCT_SaveGameController_FWDDECL
#include <Modloader/app/structs/SaveGameController__Class.h>
#endif
#undef IL2CPP_STRUCT_SaveGameController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SaveGameController_DEFINED) && !defined(IL2CPP_STRUCT_SaveGameController_FWDDECL)
#include <Modloader/app/structs/SaveGameController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SaveGameController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
