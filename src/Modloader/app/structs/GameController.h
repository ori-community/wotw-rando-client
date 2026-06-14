#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameController_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController_DEFINED)
#include <Modloader/app/structs/GameController__Fields.h>
#if defined(IL2CPP_STRUCT_GameController__Fields_DEFINED)
#define IL2CPP_STRUCT_GameController_DEFINED
struct GameController__Class;
struct GameController {
    struct GameController__Class* klass;
    MonitorData* monitor;
    struct GameController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameController_FWDDECL)
#define IL2CPP_STRUCT_GameController_FWDDECL
#include <Modloader/app/structs/GameController__Class.h>
#endif
#undef IL2CPP_STRUCT_GameController_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameController_DEFINED) && !defined(IL2CPP_STRUCT_GameController_FWDDECL)
#include <Modloader/app/structs/GameController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
