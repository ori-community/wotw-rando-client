#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectDeltaTimeController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectDeltaTimeController_DEFINED)
#define IL2CPP_STRUCT_DirectDeltaTimeController_DEFINED
struct DirectDeltaTimeController__Class;
struct DirectDeltaTimeController {
    struct DirectDeltaTimeController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DirectDeltaTimeController_FWDDECL)
#define IL2CPP_STRUCT_DirectDeltaTimeController_FWDDECL
#include <Modloader/app/structs/DirectDeltaTimeController__Class.h>
#endif
#undef IL2CPP_STRUCT_DirectDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectDeltaTimeController_DEFINED) && !defined(IL2CPP_STRUCT_DirectDeltaTimeController_FWDDECL)
#include <Modloader/app/structs/DirectDeltaTimeController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectDeltaTimeController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
