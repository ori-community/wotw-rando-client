#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandstormController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandstormController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandstormController_DEFINED)
#include <Modloader/app/structs/SandstormController__Fields.h>
#if defined(IL2CPP_STRUCT_SandstormController__Fields_DEFINED)
#define IL2CPP_STRUCT_SandstormController_DEFINED
struct SandstormController__Class;
struct SandstormController {
    struct SandstormController__Class* klass;
    MonitorData* monitor;
    struct SandstormController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandstormController_FWDDECL)
#define IL2CPP_STRUCT_SandstormController_FWDDECL
#include <Modloader/app/structs/SandstormController__Class.h>
#endif
#undef IL2CPP_STRUCT_SandstormController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandstormController_DEFINED) && !defined(IL2CPP_STRUCT_SandstormController_FWDDECL)
#include <Modloader/app/structs/SandstormController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandstormController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
