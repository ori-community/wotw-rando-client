#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovement_DEFINED)
#include <Modloader/app/structs/PlatformMovement__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformMovement_DEFINED
struct PlatformMovement__Class;
struct PlatformMovement {
    struct PlatformMovement__Class* klass;
    MonitorData* monitor;
    struct PlatformMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformMovement_FWDDECL)
#define IL2CPP_STRUCT_PlatformMovement_FWDDECL
#include <Modloader/app/structs/PlatformMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformMovement_DEFINED) && !defined(IL2CPP_STRUCT_PlatformMovement_FWDDECL)
#include <Modloader/app/structs/PlatformMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
