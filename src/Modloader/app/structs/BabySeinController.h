#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BabySeinController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BabySeinController_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinController_DEFINED)
#include <Modloader/app/structs/BabySeinController__Fields.h>
#if defined(IL2CPP_STRUCT_BabySeinController__Fields_DEFINED)
#define IL2CPP_STRUCT_BabySeinController_DEFINED
struct BabySeinController__Class;
struct BabySeinController {
    struct BabySeinController__Class* klass;
    MonitorData* monitor;
    struct BabySeinController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BabySeinController_FWDDECL)
#define IL2CPP_STRUCT_BabySeinController_FWDDECL
#include <Modloader/app/structs/BabySeinController__Class.h>
#endif
#undef IL2CPP_STRUCT_BabySeinController_INITIALIZING
#if !defined(IL2CPP_STRUCT_BabySeinController_DEFINED) && !defined(IL2CPP_STRUCT_BabySeinController_FWDDECL)
#include <Modloader/app/structs/BabySeinController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BabySeinController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
