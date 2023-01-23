#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartController_DEFINED)
#include <Modloader/app/structs/CartController__Fields.h>
#if defined(IL2CPP_STRUCT_CartController__Fields_DEFINED)
#define IL2CPP_STRUCT_CartController_DEFINED
struct CartController__Class;
struct CartController {
    struct CartController__Class* klass;
    MonitorData* monitor;
    struct CartController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartController_FWDDECL)
#define IL2CPP_STRUCT_CartController_FWDDECL
#include <Modloader/app/structs/CartController__Class.h>
#endif
#undef IL2CPP_STRUCT_CartController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartController_DEFINED) && !defined(IL2CPP_STRUCT_CartController_FWDDECL)
#include <Modloader/app/structs/CartController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
