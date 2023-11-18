#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PausedDeltaTimeController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PausedDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_PausedDeltaTimeController_DEFINED)
#define IL2CPP_STRUCT_PausedDeltaTimeController_DEFINED
struct PausedDeltaTimeController__Class;
struct PausedDeltaTimeController {
    struct PausedDeltaTimeController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PausedDeltaTimeController_FWDDECL)
#define IL2CPP_STRUCT_PausedDeltaTimeController_FWDDECL
#include <Modloader/app/structs/PausedDeltaTimeController__Class.h>
#endif
#undef IL2CPP_STRUCT_PausedDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_PausedDeltaTimeController_DEFINED) && !defined(IL2CPP_STRUCT_PausedDeltaTimeController_FWDDECL)
#include <Modloader/app/structs/PausedDeltaTimeController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PausedDeltaTimeController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
