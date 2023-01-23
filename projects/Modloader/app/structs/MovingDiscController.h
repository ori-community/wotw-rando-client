#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingDiscController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingDiscController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingDiscController_DEFINED)
#include <Modloader/app/structs/MovingDiscController__Fields.h>
#if defined(IL2CPP_STRUCT_MovingDiscController__Fields_DEFINED)
#define IL2CPP_STRUCT_MovingDiscController_DEFINED
struct MovingDiscController__Class;
struct MovingDiscController {
    struct MovingDiscController__Class* klass;
    MonitorData* monitor;
    struct MovingDiscController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingDiscController_FWDDECL)
#define IL2CPP_STRUCT_MovingDiscController_FWDDECL
#include <Modloader/app/structs/MovingDiscController__Class.h>
#endif
#undef IL2CPP_STRUCT_MovingDiscController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingDiscController_DEFINED) && !defined(IL2CPP_STRUCT_MovingDiscController_FWDDECL)
#include <Modloader/app/structs/MovingDiscController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingDiscController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
