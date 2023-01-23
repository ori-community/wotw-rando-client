#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PondController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PondController_INITIALIZING
#if !defined(IL2CPP_STRUCT_PondController_DEFINED)
#include <Modloader/app/structs/PondController__Fields.h>
#if defined(IL2CPP_STRUCT_PondController__Fields_DEFINED)
#define IL2CPP_STRUCT_PondController_DEFINED
struct PondController__Class;
struct PondController {
    struct PondController__Class* klass;
    MonitorData* monitor;
    struct PondController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PondController_FWDDECL)
#define IL2CPP_STRUCT_PondController_FWDDECL
#include <Modloader/app/structs/PondController__Class.h>
#endif
#undef IL2CPP_STRUCT_PondController_INITIALIZING
#if !defined(IL2CPP_STRUCT_PondController_DEFINED) && !defined(IL2CPP_STRUCT_PondController_FWDDECL)
#include <Modloader/app/structs/PondController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PondController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
