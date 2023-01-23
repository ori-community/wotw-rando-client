#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateController_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateController_DEFINED)
#include <Modloader/app/structs/UberStateController__Fields.h>
#if defined(IL2CPP_STRUCT_UberStateController__Fields_DEFINED)
#define IL2CPP_STRUCT_UberStateController_DEFINED
struct UberStateController__Class;
struct UberStateController {
    struct UberStateController__Class* klass;
    MonitorData* monitor;
    struct UberStateController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateController_FWDDECL)
#define IL2CPP_STRUCT_UberStateController_FWDDECL
#include <Modloader/app/structs/UberStateController__Class.h>
#endif
#undef IL2CPP_STRUCT_UberStateController_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateController_DEFINED) && !defined(IL2CPP_STRUCT_UberStateController_FWDDECL)
#include <Modloader/app/structs/UberStateController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
