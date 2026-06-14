#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_DEFINED
struct RTPC;
struct Switch_1;
struct List_1_WeaponParameterMap_;
struct GameplaySoundParameterMap__Fields {
    struct ScriptableObject__Fields _;
    struct RTPC* OriDamageDealtRtpc;
    struct Switch_1* OriBasicDamage;
    struct Switch_1* OriBlockedDamage;
    struct Switch_1* OriCriticalDamage;
    struct Switch_1* OriDeathDamage;
    struct Switch_1* OriSurfaceDamage;
    struct Switch_1* OriDestructibleSurfaceDamage;
    struct List_1_WeaponParameterMap_* WeaponParameterMaps;
    struct RTPC* EnemyDamagePercentTakenRtpc;
    struct Switch_1* EnemyBasicDamage;
    struct Switch_1* EnemyBlockedDamage;
    struct Switch_1* EnemyCriticalDamage;
    struct Switch_1* EnemyDeathDamage;
    struct Switch_1* EnemyBashDamage;
    struct Switch_1* EnemyBurnDamage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_FWDDECL
#include <Modloader/app/structs/List_1_WeaponParameterMap_.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/Switch_1.h>
#endif
#undef IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameplaySoundParameterMap__Fields_FWDDECL)
#include <Modloader/app/structs/GameplaySoundParameterMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameplaySoundParameterMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
