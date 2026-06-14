#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBrainController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBrainController_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBrainController_DEFINED)
#define IL2CPP_STRUCT_IBrainController_DEFINED
struct IBrainController__Class;
struct IBrainController {
    struct IBrainController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBrainController_FWDDECL)
#define IL2CPP_STRUCT_IBrainController_FWDDECL
#include <Modloader/app/structs/IBrainController__Class.h>
#endif
#undef IL2CPP_STRUCT_IBrainController_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBrainController_DEFINED) && !defined(IL2CPP_STRUCT_IBrainController_FWDDECL)
#include <Modloader/app/structs/IBrainController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBrainController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
