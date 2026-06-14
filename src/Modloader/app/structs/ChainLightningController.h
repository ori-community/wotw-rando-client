#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChainLightningController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChainLightningController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainLightningController_DEFINED)
#include <Modloader/app/structs/ChainLightningController__Fields.h>
#if defined(IL2CPP_STRUCT_ChainLightningController__Fields_DEFINED)
#define IL2CPP_STRUCT_ChainLightningController_DEFINED
struct ChainLightningController__Class;
struct ChainLightningController {
    struct ChainLightningController__Class* klass;
    MonitorData* monitor;
    struct ChainLightningController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChainLightningController_FWDDECL)
#define IL2CPP_STRUCT_ChainLightningController_FWDDECL
#include <Modloader/app/structs/ChainLightningController__Class.h>
#endif
#undef IL2CPP_STRUCT_ChainLightningController_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChainLightningController_DEFINED) && !defined(IL2CPP_STRUCT_ChainLightningController_FWDDECL)
#include <Modloader/app/structs/ChainLightningController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChainLightningController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
