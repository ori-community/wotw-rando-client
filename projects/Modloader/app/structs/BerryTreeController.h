#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BerryTreeController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BerryTreeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_BerryTreeController_DEFINED)
#include <Modloader/app/structs/BerryTreeController__Fields.h>
#if defined(IL2CPP_STRUCT_BerryTreeController__Fields_DEFINED)
#define IL2CPP_STRUCT_BerryTreeController_DEFINED
struct BerryTreeController__Class;
struct BerryTreeController {
    struct BerryTreeController__Class* klass;
    MonitorData* monitor;
    struct BerryTreeController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BerryTreeController_FWDDECL)
#define IL2CPP_STRUCT_BerryTreeController_FWDDECL
#include <Modloader/app/structs/BerryTreeController__Class.h>
#endif
#undef IL2CPP_STRUCT_BerryTreeController_INITIALIZING
#if !defined(IL2CPP_STRUCT_BerryTreeController_DEFINED) && !defined(IL2CPP_STRUCT_BerryTreeController_FWDDECL)
#include <Modloader/app/structs/BerryTreeController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BerryTreeController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
