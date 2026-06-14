#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlatformMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlatformMovement_DEFINED)
#define IL2CPP_STRUCT_IPlatformMovement_DEFINED
struct IPlatformMovement__Class;
struct IPlatformMovement {
    struct IPlatformMovement__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlatformMovement_FWDDECL)
#define IL2CPP_STRUCT_IPlatformMovement_FWDDECL
#include <Modloader/app/structs/IPlatformMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_IPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlatformMovement_DEFINED) && !defined(IL2CPP_STRUCT_IPlatformMovement_FWDDECL)
#include <Modloader/app/structs/IPlatformMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlatformMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
