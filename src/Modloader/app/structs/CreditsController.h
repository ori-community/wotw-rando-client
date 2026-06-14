#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreditsController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreditsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreditsController_DEFINED)
#include <Modloader/app/structs/CreditsController__Fields.h>
#if defined(IL2CPP_STRUCT_CreditsController__Fields_DEFINED)
#define IL2CPP_STRUCT_CreditsController_DEFINED
struct CreditsController__Class;
struct CreditsController {
    struct CreditsController__Class* klass;
    MonitorData* monitor;
    struct CreditsController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreditsController_FWDDECL)
#define IL2CPP_STRUCT_CreditsController_FWDDECL
#include <Modloader/app/structs/CreditsController__Class.h>
#endif
#undef IL2CPP_STRUCT_CreditsController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreditsController_DEFINED) && !defined(IL2CPP_STRUCT_CreditsController_FWDDECL)
#include <Modloader/app/structs/CreditsController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreditsController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
