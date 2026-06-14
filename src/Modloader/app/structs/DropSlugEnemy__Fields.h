#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemy__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugEnemy__Fields_DEFINED
struct FlyMovement;
struct SpriteRotationController;
struct PrefabSpawner;
struct DropSlugEnemyAnimations;
struct DropSlugEnemySettings;
struct SoundSource;
struct DropSlugEnemy_States;
struct DropSlugEnemy__Fields {
    struct Enemy2D__Fields _;
    struct FlyMovement* FlyMovement;
    struct SpriteRotationController* SpriteRotation;
    struct PrefabSpawner* Explosion;
    struct DropSlugEnemyAnimations* Animations;
    struct DropSlugEnemySettings* Settings;
    struct SoundSource* Idle;
    struct SoundSource* Alert;
    struct SoundSource* DropDown;
    struct DropSlugEnemy_States* State;
    bool m_timedRespawn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugEnemy__Fields_FWDDECL
#include <Modloader/app/structs/DropSlugEnemyAnimations.h>
#include <Modloader/app/structs/DropSlugEnemySettings.h>
#include <Modloader/app/structs/DropSlugEnemy_States.h>
#include <Modloader/app/structs/FlyMovement.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/SpriteRotationController.h>
#endif
#undef IL2CPP_STRUCT_DropSlugEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
