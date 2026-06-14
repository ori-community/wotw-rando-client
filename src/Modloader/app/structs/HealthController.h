#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HealthController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HealthController_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthController_DEFINED)
#include <Modloader/app/structs/HealthController__Fields.h>
#if defined(IL2CPP_STRUCT_HealthController__Fields_DEFINED)
#define IL2CPP_STRUCT_HealthController_DEFINED
struct HealthController__Class;
struct HealthController {
    struct HealthController__Class* klass;
    MonitorData* monitor;
    struct HealthController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HealthController_FWDDECL)
#define IL2CPP_STRUCT_HealthController_FWDDECL
#include <Modloader/app/structs/HealthController__Class.h>
#endif
#undef IL2CPP_STRUCT_HealthController_INITIALIZING
#if !defined(IL2CPP_STRUCT_HealthController_DEFINED) && !defined(IL2CPP_STRUCT_HealthController_FWDDECL)
#include <Modloader/app/structs/HealthController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HealthController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
