#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewSetupStateController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewSetupStateController_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSetupStateController_DEFINED)
#include <Modloader/app/structs/NewSetupStateController__Fields.h>
#if defined(IL2CPP_STRUCT_NewSetupStateController__Fields_DEFINED)
#define IL2CPP_STRUCT_NewSetupStateController_DEFINED
struct NewSetupStateController__Class;
struct NewSetupStateController {
    struct NewSetupStateController__Class* klass;
    MonitorData* monitor;
    struct NewSetupStateController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewSetupStateController_FWDDECL)
#define IL2CPP_STRUCT_NewSetupStateController_FWDDECL
#include <Modloader/app/structs/NewSetupStateController__Class.h>
#endif
#undef IL2CPP_STRUCT_NewSetupStateController_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewSetupStateController_DEFINED) && !defined(IL2CPP_STRUCT_NewSetupStateController_FWDDECL)
#include <Modloader/app/structs/NewSetupStateController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewSetupStateController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
