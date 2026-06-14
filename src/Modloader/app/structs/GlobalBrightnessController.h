#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalBrightnessController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalBrightnessController_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalBrightnessController_DEFINED)
#define IL2CPP_STRUCT_GlobalBrightnessController_DEFINED
struct GlobalBrightnessController__Class;
struct GlobalBrightnessController {
    struct GlobalBrightnessController__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GlobalBrightnessController_FWDDECL)
#define IL2CPP_STRUCT_GlobalBrightnessController_FWDDECL
#include <Modloader/app/structs/GlobalBrightnessController__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalBrightnessController_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalBrightnessController_DEFINED) && !defined(IL2CPP_STRUCT_GlobalBrightnessController_FWDDECL)
#include <Modloader/app/structs/GlobalBrightnessController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalBrightnessController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
