#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraBasedColliderChain_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraBasedColliderChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraBasedColliderChain_DEFINED)
#include <Modloader/app/structs/CameraBasedColliderChain__Fields.h>
#if defined(IL2CPP_STRUCT_CameraBasedColliderChain__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraBasedColliderChain_DEFINED
struct CameraBasedColliderChain__Class;
struct CameraBasedColliderChain {
    struct CameraBasedColliderChain__Class* klass;
    MonitorData* monitor;
    struct CameraBasedColliderChain__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraBasedColliderChain_FWDDECL)
#define IL2CPP_STRUCT_CameraBasedColliderChain_FWDDECL
#include <Modloader/app/structs/CameraBasedColliderChain__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraBasedColliderChain_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraBasedColliderChain_DEFINED) && !defined(IL2CPP_STRUCT_CameraBasedColliderChain_FWDDECL)
#include <Modloader/app/structs/CameraBasedColliderChain.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraBasedColliderChain.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
