#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinPlatformMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlatformMovement_DEFINED)
#include <Modloader/app/structs/SeinPlatformMovement__Fields.h>
#if defined(IL2CPP_STRUCT_SeinPlatformMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinPlatformMovement_DEFINED
struct SeinPlatformMovement__Class;
struct SeinPlatformMovement {
    struct SeinPlatformMovement__Class* klass;
    MonitorData* monitor;
    struct SeinPlatformMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinPlatformMovement_FWDDECL)
#define IL2CPP_STRUCT_SeinPlatformMovement_FWDDECL
#include <Modloader/app/structs/SeinPlatformMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinPlatformMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinPlatformMovement_DEFINED) && !defined(IL2CPP_STRUCT_SeinPlatformMovement_FWDDECL)
#include <Modloader/app/structs/SeinPlatformMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinPlatformMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
