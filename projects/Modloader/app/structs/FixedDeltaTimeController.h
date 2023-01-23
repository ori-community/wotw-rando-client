#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedDeltaTimeController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDeltaTimeController_DEFINED)
#include <Modloader/app/structs/FixedDeltaTimeController__Fields.h>
#if defined(IL2CPP_STRUCT_FixedDeltaTimeController__Fields_DEFINED)
#define IL2CPP_STRUCT_FixedDeltaTimeController_DEFINED
struct FixedDeltaTimeController__Class;
struct FixedDeltaTimeController {
    struct FixedDeltaTimeController__Class* klass;
    MonitorData* monitor;
    struct FixedDeltaTimeController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FixedDeltaTimeController_FWDDECL)
#define IL2CPP_STRUCT_FixedDeltaTimeController_FWDDECL
#include <Modloader/app/structs/FixedDeltaTimeController__Class.h>
#endif
#undef IL2CPP_STRUCT_FixedDeltaTimeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedDeltaTimeController_DEFINED) && !defined(IL2CPP_STRUCT_FixedDeltaTimeController_FWDDECL)
#include <Modloader/app/structs/FixedDeltaTimeController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedDeltaTimeController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
