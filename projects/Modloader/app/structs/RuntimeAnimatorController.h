#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeAnimatorController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeAnimatorController_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeAnimatorController_DEFINED)
#include <Modloader/app/structs/RuntimeAnimatorController__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeAnimatorController__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeAnimatorController_DEFINED
struct RuntimeAnimatorController__Class;
struct RuntimeAnimatorController {
    struct RuntimeAnimatorController__Class* klass;
    MonitorData* monitor;
    struct RuntimeAnimatorController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeAnimatorController_FWDDECL)
#define IL2CPP_STRUCT_RuntimeAnimatorController_FWDDECL
#include <Modloader/app/structs/RuntimeAnimatorController__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeAnimatorController_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeAnimatorController_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeAnimatorController_FWDDECL)
#include <Modloader/app/structs/RuntimeAnimatorController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeAnimatorController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
