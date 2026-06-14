#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Projectile_RicochetShardSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Projectile_RicochetShardSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_Projectile_RicochetShardSettings_DEFINED)
#define IL2CPP_STRUCT_Projectile_RicochetShardSettings_DEFINED
struct SoundProvider;
struct Projectile_RicochetShardSettings {
    bool Allowed;
    struct SoundProvider* Sound;
};
#endif
#if !defined(IL2CPP_STRUCT_Projectile_RicochetShardSettings_FWDDECL)
#define IL2CPP_STRUCT_Projectile_RicochetShardSettings_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_Projectile_RicochetShardSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_Projectile_RicochetShardSettings_DEFINED) && !defined(IL2CPP_STRUCT_Projectile_RicochetShardSettings_FWDDECL)
#include <Modloader/app/structs/Projectile_RicochetShardSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Projectile_RicochetShardSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
