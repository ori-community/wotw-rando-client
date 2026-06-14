#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KamikazeSootEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KamikazeSootEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemy__Fields_DEFINED)
#include <Modloader/app/structs/GroundEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_GroundEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_KamikazeSootEnemy__Fields_DEFINED
struct KamikazeSootEnemyAnimations;
struct KamikazeSootEnemySettings;
struct KamikazeSootEnemy_States;
struct RollingMovement;
struct SoundSource;
struct GameObject;
struct KamikazeSootEnemy__Fields {
    struct GroundEnemy__Fields _;
    struct KamikazeSootEnemyAnimations* Animations;
    struct KamikazeSootEnemySettings* Settings;
    struct KamikazeSootEnemy_States* State;
    struct RollingMovement* RollingMovement;
    struct SoundSource* IdleSound;
    struct SoundSource* AlertSound;
    struct SoundSource* RollingSound;
    struct SoundSource* StartRollingSound;
    struct SoundSource* HitGroundSound;
    struct GameObject* KamikazeExplosion;
    bool m_timedRespawn;
    bool m_isSelfDestructing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_KamikazeSootEnemy__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/KamikazeSootEnemyAnimations.h>
#include <Modloader/app/structs/KamikazeSootEnemySettings.h>
#include <Modloader/app/structs/KamikazeSootEnemy_States.h>
#include <Modloader/app/structs/RollingMovement.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_KamikazeSootEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KamikazeSootEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/KamikazeSootEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KamikazeSootEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
