#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BushSetupController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BushSetupController_INITIALIZING
#if !defined(IL2CPP_STRUCT_BushSetupController_DEFINED)
#include <Modloader/app/structs/BushSetupController__Fields.h>
#if defined(IL2CPP_STRUCT_BushSetupController__Fields_DEFINED)
#define IL2CPP_STRUCT_BushSetupController_DEFINED
struct BushSetupController__Class;
struct BushSetupController {
    struct BushSetupController__Class* klass;
    MonitorData* monitor;
    struct BushSetupController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BushSetupController_FWDDECL)
#define IL2CPP_STRUCT_BushSetupController_FWDDECL
#include <Modloader/app/structs/BushSetupController__Class.h>
#endif
#undef IL2CPP_STRUCT_BushSetupController_INITIALIZING
#if !defined(IL2CPP_STRUCT_BushSetupController_DEFINED) && !defined(IL2CPP_STRUCT_BushSetupController_FWDDECL)
#include <Modloader/app/structs/BushSetupController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BushSetupController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
