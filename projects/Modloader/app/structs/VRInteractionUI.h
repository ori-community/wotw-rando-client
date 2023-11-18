#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRInteractionUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRInteractionUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRInteractionUI_DEFINED)
#include <Modloader/app/structs/VRInteractionUI__Fields.h>
#if defined(IL2CPP_STRUCT_VRInteractionUI__Fields_DEFINED)
#define IL2CPP_STRUCT_VRInteractionUI_DEFINED
struct VRInteractionUI__Class;
struct VRInteractionUI {
    struct VRInteractionUI__Class* klass;
    MonitorData* monitor;
    struct VRInteractionUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRInteractionUI_FWDDECL)
#define IL2CPP_STRUCT_VRInteractionUI_FWDDECL
#include <Modloader/app/structs/VRInteractionUI__Class.h>
#endif
#undef IL2CPP_STRUCT_VRInteractionUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRInteractionUI_DEFINED) && !defined(IL2CPP_STRUCT_VRInteractionUI_FWDDECL)
#include <Modloader/app/structs/VRInteractionUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRInteractionUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
