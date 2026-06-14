#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CancellableController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CancellableController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellableController_DEFINED)
#include <Modloader/app/structs/CancellableController__Fields.h>
#if defined(IL2CPP_STRUCT_CancellableController__Fields_DEFINED)
#define IL2CPP_STRUCT_CancellableController_DEFINED
struct CancellableController__Class;
struct CancellableController {
    struct CancellableController__Class* klass;
    MonitorData* monitor;
    struct CancellableController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CancellableController_FWDDECL)
#define IL2CPP_STRUCT_CancellableController_FWDDECL
#include <Modloader/app/structs/CancellableController__Class.h>
#endif
#undef IL2CPP_STRUCT_CancellableController_INITIALIZING
#if !defined(IL2CPP_STRUCT_CancellableController_DEFINED) && !defined(IL2CPP_STRUCT_CancellableController_FWDDECL)
#include <Modloader/app/structs/CancellableController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CancellableController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
