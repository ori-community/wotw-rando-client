#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ShootProjectileBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ShootProjectileBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_DEFINED
struct ShootMultiProjectileRadialBehaviour__Fields {
    struct ShootProjectileBehaviour__Fields _;
    float StartAngle;
    float AngleOffset;
    int32_t NumOfProjectiles;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootMultiProjectileRadialBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/ShootMultiProjectileRadialBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootMultiProjectileRadialBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
