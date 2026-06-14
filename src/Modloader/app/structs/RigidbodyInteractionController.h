#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyInteractionController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyInteractionController_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_DEFINED)
#include <Modloader/app/structs/RigidbodyInteractionController__Fields.h>
#if defined(IL2CPP_STRUCT_RigidbodyInteractionController__Fields_DEFINED)
#define IL2CPP_STRUCT_RigidbodyInteractionController_DEFINED
struct RigidbodyInteractionController__Class;
struct RigidbodyInteractionController {
    struct RigidbodyInteractionController__Class* klass;
    MonitorData* monitor;
    struct RigidbodyInteractionController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyInteractionController_FWDDECL
#include <Modloader/app/structs/RigidbodyInteractionController__Class.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyInteractionController_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyInteractionController_FWDDECL)
#include <Modloader/app/structs/RigidbodyInteractionController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyInteractionController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
