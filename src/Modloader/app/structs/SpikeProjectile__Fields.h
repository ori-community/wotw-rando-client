#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpikeProjectile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpikeProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeProjectile__Fields_DEFINED)
#include <Modloader/app/structs/Projectile__Fields.h>
#if defined(IL2CPP_STRUCT_Projectile__Fields_DEFINED)
#define IL2CPP_STRUCT_SpikeProjectile__Fields_DEFINED
struct AnimationCurve;
struct SpikeProjectile__Fields {
    struct Projectile__Fields _;
    struct AnimationCurve* SpeedOverTimeCurve;
    float m_backupMaximumLiveTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpikeProjectile__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpikeProjectile__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_SpikeProjectile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeProjectile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpikeProjectile__Fields_FWDDECL)
#include <Modloader/app/structs/SpikeProjectile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpikeProjectile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
