#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcidSlugEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcidSlugEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy__Fields_DEFINED)
#include <Modloader/app/structs/SlugEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_SlugEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_AcidSlugEnemy__Fields_DEFINED
struct SoundSource;
struct AcidSlugEnemyAnimations;
struct AcidSlugEnemySettings;
struct AcidSlugEnemy_States;
struct AcidSlugEnemy__Fields {
    struct SlugEnemy__Fields _;
    struct SoundSource* CrawlingSoundSource;
    struct SoundSource* ChargingSoundSource;
    struct SoundSource* ShootingSoundSource;
    struct SoundSource* MovingSoundSource;
    struct AcidSlugEnemyAnimations* Animations;
    struct AcidSlugEnemySettings* Settings;
    struct AcidSlugEnemy_States* State;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_AcidSlugEnemy__Fields_FWDDECL
#include <Modloader/app/structs/AcidSlugEnemyAnimations.h>
#include <Modloader/app/structs/AcidSlugEnemySettings.h>
#include <Modloader/app/structs/AcidSlugEnemy_States.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_AcidSlugEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AcidSlugEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/AcidSlugEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcidSlugEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
