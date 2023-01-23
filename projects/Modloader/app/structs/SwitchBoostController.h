#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchBoostController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchBoostController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchBoostController_DEFINED)
#define IL2CPP_STRUCT_SwitchBoostController_DEFINED
struct SwitchBoostController__Class;
struct SwitchBoostController {
    struct SwitchBoostController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SwitchBoostController_FWDDECL)
#define IL2CPP_STRUCT_SwitchBoostController_FWDDECL
#include <Modloader/app/structs/SwitchBoostController__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchBoostController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchBoostController_DEFINED) && !defined(IL2CPP_STRUCT_SwitchBoostController_FWDDECL)
#include <Modloader/app/structs/SwitchBoostController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchBoostController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
