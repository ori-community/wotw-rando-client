#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MechSpiderController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MechSpiderController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderController_DEFINED)
#include <Modloader/app/structs/MechSpiderController__Fields.h>
#if defined(IL2CPP_STRUCT_MechSpiderController__Fields_DEFINED)
#define IL2CPP_STRUCT_MechSpiderController_DEFINED
struct MechSpiderController__Class;
struct MechSpiderController {
    struct MechSpiderController__Class* klass;
    MonitorData* monitor;
    struct MechSpiderController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MechSpiderController_FWDDECL)
#define IL2CPP_STRUCT_MechSpiderController_FWDDECL
#include <Modloader/app/structs/MechSpiderController__Class.h>
#endif
#undef IL2CPP_STRUCT_MechSpiderController_INITIALIZING
#if !defined(IL2CPP_STRUCT_MechSpiderController_DEFINED) && !defined(IL2CPP_STRUCT_MechSpiderController_FWDDECL)
#include <Modloader/app/structs/MechSpiderController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MechSpiderController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
