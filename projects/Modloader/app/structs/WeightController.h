#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeightController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeightController_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeightController_DEFINED)
#include <Modloader/app/structs/WeightController__Fields.h>
#if defined(IL2CPP_STRUCT_WeightController__Fields_DEFINED)
#define IL2CPP_STRUCT_WeightController_DEFINED
struct WeightController__Class;
struct WeightController {
    struct WeightController__Class* klass;
    MonitorData* monitor;
    struct WeightController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeightController_FWDDECL)
#define IL2CPP_STRUCT_WeightController_FWDDECL
#include <Modloader/app/structs/WeightController__Class.h>
#endif
#undef IL2CPP_STRUCT_WeightController_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeightController_DEFINED) && !defined(IL2CPP_STRUCT_WeightController_FWDDECL)
#include <Modloader/app/structs/WeightController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeightController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
