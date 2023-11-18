#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightningController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightningController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningController_DEFINED)
#include <Modloader/app/structs/LightningController__Fields.h>
#if defined(IL2CPP_STRUCT_LightningController__Fields_DEFINED)
#define IL2CPP_STRUCT_LightningController_DEFINED
struct LightningController__Class;
struct LightningController {
    struct LightningController__Class* klass;
    MonitorData* monitor;
    struct LightningController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightningController_FWDDECL)
#define IL2CPP_STRUCT_LightningController_FWDDECL
#include <Modloader/app/structs/LightningController__Class.h>
#endif
#undef IL2CPP_STRUCT_LightningController_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningController_DEFINED) && !defined(IL2CPP_STRUCT_LightningController_FWDDECL)
#include <Modloader/app/structs/LightningController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightningController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
