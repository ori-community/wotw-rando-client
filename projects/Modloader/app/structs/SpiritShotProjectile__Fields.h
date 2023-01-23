#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShotProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShotProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShotProjectile__Fields_DEFINED)
#include <Modloader/app/structs/Projectile__Fields.h>
#if defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShotProjectile__Fields_DEFINED
struct SpiritShotProjectile__Fields {
    struct Projectile__Fields _;
    float m_explosionScale;
    float m_explosionCameraShakeStrength;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShotProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritShotProjectile__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpiritShotProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShotProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShotProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritShotProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShotProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
