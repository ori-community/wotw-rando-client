#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GravityPlatformMovementSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GravityPlatformMovementSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GravityPlatformMovementSettings_DEFINED)
#include <Modloader/app/structs/GravityPlatformMovementSettings__Fields.h>
#if defined(IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_GravityPlatformMovementSettings_DEFINED
struct GravityPlatformMovementSettings__Class;
struct GravityPlatformMovementSettings {
    struct GravityPlatformMovementSettings__Class* klass;
    MonitorData* monitor;
    struct GravityPlatformMovementSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GravityPlatformMovementSettings_FWDDECL)
#define IL2CPP_STRUCT_GravityPlatformMovementSettings_FWDDECL
#include <Modloader/app/structs/GravityPlatformMovementSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_GravityPlatformMovementSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_GravityPlatformMovementSettings_DEFINED) && !defined(IL2CPP_STRUCT_GravityPlatformMovementSettings_FWDDECL)
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
