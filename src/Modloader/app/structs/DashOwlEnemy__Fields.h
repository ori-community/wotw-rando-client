#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemy__Fields_DEFINED)
#include <Modloader/app/structs/OwlEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_OwlEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_DashOwlEnemy__Fields_DEFINED
struct SoundSource;
struct Varying2DSoundProvider;
struct DashOwlEnemyAnimations;
struct DashOwlEnemySettings;
struct DashOwlEnemy_States;
struct DashOwlEnemy__Fields {
    struct OwlEnemy__Fields _;
    struct SoundSource* DashSound;
    struct SoundSource* DashAlertSound;
    struct Varying2DSoundProvider* HitWallSound;
    struct DashOwlEnemyAnimations* Animations;
    struct DashOwlEnemySettings* Settings;
    struct DashOwlEnemy_States* State;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlEnemy__Fields_FWDDECL
#include <Modloader/app/structs/DashOwlEnemyAnimations.h>
#include <Modloader/app/structs/DashOwlEnemySettings.h>
#include <Modloader/app/structs/DashOwlEnemy_States.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_DashOwlEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
