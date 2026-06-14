#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CaveSleepController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CaveSleepController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaveSleepController_DEFINED)
#include <Modloader/app/structs/CaveSleepController__Fields.h>
#if defined(IL2CPP_STRUCT_CaveSleepController__Fields_DEFINED)
#define IL2CPP_STRUCT_CaveSleepController_DEFINED
struct CaveSleepController__Class;
struct CaveSleepController {
    struct CaveSleepController__Class* klass;
    MonitorData* monitor;
    struct CaveSleepController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CaveSleepController_FWDDECL)
#define IL2CPP_STRUCT_CaveSleepController_FWDDECL
#include <Modloader/app/structs/CaveSleepController__Class.h>
#endif
#undef IL2CPP_STRUCT_CaveSleepController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CaveSleepController_DEFINED) && !defined(IL2CPP_STRUCT_CaveSleepController_FWDDECL)
#include <Modloader/app/structs/CaveSleepController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CaveSleepController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
