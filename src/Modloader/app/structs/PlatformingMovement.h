#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlatformingMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlatformingMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformingMovement_DEFINED)
#include <Modloader/app/structs/PlatformingMovement__Fields.h>
#if defined(IL2CPP_STRUCT_PlatformingMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_PlatformingMovement_DEFINED
struct PlatformingMovement__Class;
struct PlatformingMovement {
    struct PlatformingMovement__Class* klass;
    MonitorData* monitor;
    struct PlatformingMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlatformingMovement_FWDDECL)
#define IL2CPP_STRUCT_PlatformingMovement_FWDDECL
#include <Modloader/app/structs/PlatformingMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_PlatformingMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlatformingMovement_DEFINED) && !defined(IL2CPP_STRUCT_PlatformingMovement_FWDDECL)
#include <Modloader/app/structs/PlatformingMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlatformingMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
