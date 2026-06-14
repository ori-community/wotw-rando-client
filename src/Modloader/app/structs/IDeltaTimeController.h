#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDeltaTimeController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDeltaTimeController_DEFINED)
#define IL2CPP_STRUCT_IDeltaTimeController_DEFINED
struct IDeltaTimeController__Class;
struct IDeltaTimeController {
    struct IDeltaTimeController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IDeltaTimeController_FWDDECL)
#define IL2CPP_STRUCT_IDeltaTimeController_FWDDECL
#include <Modloader/app/structs/IDeltaTimeController__Class.h>
#endif
#undef IL2CPP_STRUCT_IDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDeltaTimeController_DEFINED) && !defined(IL2CPP_STRUCT_IDeltaTimeController_FWDDECL)
#include <Modloader/app/structs/IDeltaTimeController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDeltaTimeController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
