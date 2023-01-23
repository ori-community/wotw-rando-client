#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FogGradientController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FogGradientController_INITIALIZING
#if !defined(IL2CPP_STRUCT_FogGradientController_DEFINED)
#include <Modloader/app/structs/FogGradientController__Fields.h>
#if defined(IL2CPP_STRUCT_FogGradientController__Fields_DEFINED)
#define IL2CPP_STRUCT_FogGradientController_DEFINED
struct FogGradientController__Class;
struct FogGradientController {
    struct FogGradientController__Class* klass;
    MonitorData* monitor;
    struct FogGradientController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FogGradientController_FWDDECL)
#define IL2CPP_STRUCT_FogGradientController_FWDDECL
#include <Modloader/app/structs/FogGradientController__Class.h>
#endif
#undef IL2CPP_STRUCT_FogGradientController_INITIALIZING
#if !defined(IL2CPP_STRUCT_FogGradientController_DEFINED) && !defined(IL2CPP_STRUCT_FogGradientController_FWDDECL)
#include <Modloader/app/structs/FogGradientController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FogGradientController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
