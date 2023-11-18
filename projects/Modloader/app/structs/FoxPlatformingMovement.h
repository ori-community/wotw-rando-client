#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxPlatformingMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxPlatformingMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxPlatformingMovement_DEFINED)
#include <Modloader/app/structs/FoxPlatformingMovement__Fields.h>
#if defined(IL2CPP_STRUCT_FoxPlatformingMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxPlatformingMovement_DEFINED
struct FoxPlatformingMovement__Class;
struct FoxPlatformingMovement {
    struct FoxPlatformingMovement__Class* klass;
    MonitorData* monitor;
    struct FoxPlatformingMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxPlatformingMovement_FWDDECL)
#define IL2CPP_STRUCT_FoxPlatformingMovement_FWDDECL
#include <Modloader/app/structs/FoxPlatformingMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_FoxPlatformingMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxPlatformingMovement_DEFINED) && !defined(IL2CPP_STRUCT_FoxPlatformingMovement_FWDDECL)
#include <Modloader/app/structs/FoxPlatformingMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxPlatformingMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
