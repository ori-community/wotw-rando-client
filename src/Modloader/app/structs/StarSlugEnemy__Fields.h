#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemy__Fields_DEFINED)
#include <Modloader/app/structs/SlugEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_SlugEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugEnemy__Fields_DEFINED
struct SoundSource;
struct SurfaceBasedSoundProvider;
struct StarSlugEnemyAnimations;
struct StarSlugEnemySettings;
struct GameObject;
struct StarSlugEnemy_States;
struct StarSlugEnemy__Fields {
    struct SlugEnemy__Fields _;
    struct SoundSource* ChargingSoundSource;
    struct SoundSource* ShootingSoundSource;
    struct SoundSource* CrawlingSoundSource;
    struct SurfaceBasedSoundProvider* CrawlingSoundProvider;
    struct StarSlugEnemyAnimations* Animations;
    struct StarSlugEnemySettings* Settings;
    struct GameObject* AttackSphere;
    struct StarSlugEnemy_States* State;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StarSlugEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_StarSlugEnemy__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/StarSlugEnemyAnimations.h>
#include <Modloader/app/structs/StarSlugEnemySettings.h>
#include <Modloader/app/structs/StarSlugEnemy_States.h>
#include <Modloader/app/structs/SurfaceBasedSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_StarSlugEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/StarSlugEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
