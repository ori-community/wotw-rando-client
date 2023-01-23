#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController_DEFINED)
#include <Modloader/app/structs/SwitchController__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchController__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchController_DEFINED
struct SwitchController__Class;
struct SwitchController {
    struct SwitchController__Class* klass;
    MonitorData* monitor;
    struct SwitchController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchController_FWDDECL)
#define IL2CPP_STRUCT_SwitchController_FWDDECL
#include <Modloader/app/structs/SwitchController__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchController_DEFINED) && !defined(IL2CPP_STRUCT_SwitchController_FWDDECL)
#include <Modloader/app/structs/SwitchController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
