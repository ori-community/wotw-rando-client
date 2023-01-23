#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleFPSController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleFPSController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPSController_DEFINED)
#include <Modloader/app/structs/SimpleFPSController__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleFPSController__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleFPSController_DEFINED
struct SimpleFPSController__Class;
struct SimpleFPSController {
    struct SimpleFPSController__Class* klass;
    MonitorData* monitor;
    struct SimpleFPSController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleFPSController_FWDDECL)
#define IL2CPP_STRUCT_SimpleFPSController_FWDDECL
#include <Modloader/app/structs/SimpleFPSController__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleFPSController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleFPSController_DEFINED) && !defined(IL2CPP_STRUCT_SimpleFPSController_FWDDECL)
#include <Modloader/app/structs/SimpleFPSController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleFPSController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
