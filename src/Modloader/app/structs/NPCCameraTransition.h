#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NPCCameraTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NPCCameraTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCCameraTransition_DEFINED)
#include <Modloader/app/structs/NPCCameraTransition__Fields.h>
#if defined(IL2CPP_STRUCT_NPCCameraTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_NPCCameraTransition_DEFINED
struct NPCCameraTransition__Class;
struct NPCCameraTransition {
    struct NPCCameraTransition__Class* klass;
    MonitorData* monitor;
    struct NPCCameraTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NPCCameraTransition_FWDDECL)
#define IL2CPP_STRUCT_NPCCameraTransition_FWDDECL
#include <Modloader/app/structs/NPCCameraTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_NPCCameraTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_NPCCameraTransition_DEFINED) && !defined(IL2CPP_STRUCT_NPCCameraTransition_FWDDECL)
#include <Modloader/app/structs/NPCCameraTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NPCCameraTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
