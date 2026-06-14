#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuPlatformMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuPlatformMovement_DEFINED)
#include <Modloader/app/structs/KuPlatformMovement__Fields.h>
#if defined(IL2CPP_STRUCT_KuPlatformMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_KuPlatformMovement_DEFINED
struct KuPlatformMovement__Class;
struct KuPlatformMovement {
    struct KuPlatformMovement__Class* klass;
    MonitorData* monitor;
    struct KuPlatformMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuPlatformMovement_FWDDECL)
#define IL2CPP_STRUCT_KuPlatformMovement_FWDDECL
#include <Modloader/app/structs/KuPlatformMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_KuPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuPlatformMovement_DEFINED) && !defined(IL2CPP_STRUCT_KuPlatformMovement_FWDDECL)
#include <Modloader/app/structs/KuPlatformMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuPlatformMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
