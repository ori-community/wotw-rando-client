#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WiggleTreeController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WiggleTreeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_WiggleTreeController_DEFINED)
#include <Modloader/app/structs/WiggleTreeController__Fields.h>
#if defined(IL2CPP_STRUCT_WiggleTreeController__Fields_DEFINED)
#define IL2CPP_STRUCT_WiggleTreeController_DEFINED
struct WiggleTreeController__Class;
struct WiggleTreeController {
    struct WiggleTreeController__Class* klass;
    MonitorData* monitor;
    struct WiggleTreeController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WiggleTreeController_FWDDECL)
#define IL2CPP_STRUCT_WiggleTreeController_FWDDECL
#include <Modloader/app/structs/WiggleTreeController__Class.h>
#endif
#undef IL2CPP_STRUCT_WiggleTreeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_WiggleTreeController_DEFINED) && !defined(IL2CPP_STRUCT_WiggleTreeController_FWDDECL)
#include <Modloader/app/structs/WiggleTreeController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WiggleTreeController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
