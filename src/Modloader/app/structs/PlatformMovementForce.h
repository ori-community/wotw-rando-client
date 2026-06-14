#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformMovementForce_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformMovementForce_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovementForce_DEFINED)
#include <Modloader/app/structs/PlatformMovementForce__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformMovementForce__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformMovementForce_DEFINED
struct PlatformMovementForce__Class;
struct PlatformMovementForce {
    struct PlatformMovementForce__Class* klass;
    MonitorData* monitor;
    struct PlatformMovementForce__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformMovementForce_FWDDECL)
#define IL2CPP_STRUCT_PlatformMovementForce_FWDDECL
#include <Modloader/app/structs/PlatformMovementForce__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformMovementForce_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovementForce_DEFINED) && !defined(IL2CPP_STRUCT_PlatformMovementForce_FWDDECL)
#include <Modloader/app/structs/PlatformMovementForce.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformMovementForce.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
