#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BounceProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BounceProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BounceProjectile__Fields_DEFINED)
#include <Modloader/app/structs/Projectile__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_BounceProjectile__Fields_DEFINED
struct BounceProjectile__Fields {
    struct Projectile__Fields _;
    float bounceTime;
    float Bounciness;
    float Friction;
    struct Vector3 m_oldVelocity;
    struct Vector3 m_oldVelocity2;
    struct Vector3 m_oldVelocity3;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BounceProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_BounceProjectile__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_BounceProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BounceProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BounceProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/BounceProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BounceProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
