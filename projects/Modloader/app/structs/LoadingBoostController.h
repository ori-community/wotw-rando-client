#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingBoostController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingBoostController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBoostController_DEFINED)
#define IL2CPP_STRUCT_LoadingBoostController_DEFINED
struct LoadingBoostController__Class;
struct LoadingBoostController {
    struct LoadingBoostController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LoadingBoostController_FWDDECL)
#define IL2CPP_STRUCT_LoadingBoostController_FWDDECL
#include <Modloader/app/structs/LoadingBoostController__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadingBoostController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingBoostController_DEFINED) && !defined(IL2CPP_STRUCT_LoadingBoostController_FWDDECL)
#include <Modloader/app/structs/LoadingBoostController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingBoostController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
