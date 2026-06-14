#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootingSpiderSounds__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootingSpiderSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpiderSounds__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootingSpiderSounds__Fields_DEFINED
struct SoundSource;
struct SoundProvider;
struct __declspec(align(8)) ShootingSpiderSounds__Fields {
    struct SoundSource* Idle;
    struct SoundProvider* Charge;
    struct SoundProvider* Shoot;
    struct SoundProvider* Hurt;
};
#endif
#if !defined(IL2CPP_STRUCT_ShootingSpiderSounds__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootingSpiderSounds__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_ShootingSpiderSounds__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpiderSounds__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootingSpiderSounds__Fields_FWDDECL)
#include <Modloader/app/structs/ShootingSpiderSounds__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootingSpiderSounds__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
