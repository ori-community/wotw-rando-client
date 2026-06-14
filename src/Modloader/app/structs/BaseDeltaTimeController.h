#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseDeltaTimeController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseDeltaTimeController_DEFINED)
#define IL2CPP_STRUCT_BaseDeltaTimeController_DEFINED
struct BaseDeltaTimeController__Class;
struct BaseDeltaTimeController {
    struct BaseDeltaTimeController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseDeltaTimeController_FWDDECL)
#define IL2CPP_STRUCT_BaseDeltaTimeController_FWDDECL
#include <Modloader/app/structs/BaseDeltaTimeController__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseDeltaTimeController_DEFINED) && !defined(IL2CPP_STRUCT_BaseDeltaTimeController_FWDDECL)
#include <Modloader/app/structs/BaseDeltaTimeController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseDeltaTimeController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
