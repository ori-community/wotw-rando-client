#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterCurrentController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterCurrentController_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterCurrentController_DEFINED)
#include <Modloader/app/structs/WaterCurrentController__Fields.h>
#if defined(IL2CPP_STRUCT_WaterCurrentController__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterCurrentController_DEFINED
struct WaterCurrentController__Class;
struct WaterCurrentController {
    struct WaterCurrentController__Class* klass;
    MonitorData* monitor;
    struct WaterCurrentController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterCurrentController_FWDDECL)
#define IL2CPP_STRUCT_WaterCurrentController_FWDDECL
#include <Modloader/app/structs/WaterCurrentController__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterCurrentController_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterCurrentController_DEFINED) && !defined(IL2CPP_STRUCT_WaterCurrentController_FWDDECL)
#include <Modloader/app/structs/WaterCurrentController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterCurrentController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
