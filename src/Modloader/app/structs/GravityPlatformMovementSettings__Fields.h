#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_DEFINED
struct __declspec(align(8)) GravityPlatformMovementSettings__Fields {
    float GravityStrength;
    float GravityAngle;
    float MaxFallSpeed;
};
#endif
#if !defined(IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GravityPlatformMovementSettings__Fields_FWDDECL)
#include <Modloader/app/structs/GravityPlatformMovementSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GravityPlatformMovementSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
