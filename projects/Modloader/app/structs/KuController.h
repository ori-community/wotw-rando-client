#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuController_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuController_DEFINED)
#include <Modloader/app/structs/KuController__Fields.h>
#if defined(IL2CPP_STRUCT_KuController__Fields_DEFINED)
#define IL2CPP_STRUCT_KuController_DEFINED
struct KuController__Class;
struct KuController {
    struct KuController__Class* klass;
    MonitorData* monitor;
    struct KuController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuController_FWDDECL)
#define IL2CPP_STRUCT_KuController_FWDDECL
#include <Modloader/app/structs/KuController__Class.h>
#endif
#undef IL2CPP_STRUCT_KuController_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuController_DEFINED) && !defined(IL2CPP_STRUCT_KuController_FWDDECL)
#include <Modloader/app/structs/KuController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
