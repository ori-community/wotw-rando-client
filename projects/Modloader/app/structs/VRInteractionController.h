#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRInteractionController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRInteractionController_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRInteractionController_DEFINED)
#include <Modloader/app/structs/VRInteractionController__Fields.h>
#if defined(IL2CPP_STRUCT_VRInteractionController__Fields_DEFINED)
#define IL2CPP_STRUCT_VRInteractionController_DEFINED
struct VRInteractionController__Class;
struct VRInteractionController {
    struct VRInteractionController__Class* klass;
    MonitorData* monitor;
    struct VRInteractionController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRInteractionController_FWDDECL)
#define IL2CPP_STRUCT_VRInteractionController_FWDDECL
#include <Modloader/app/structs/VRInteractionController__Class.h>
#endif
#undef IL2CPP_STRUCT_VRInteractionController_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRInteractionController_DEFINED) && !defined(IL2CPP_STRUCT_VRInteractionController_FWDDECL)
#include <Modloader/app/structs/VRInteractionController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRInteractionController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
