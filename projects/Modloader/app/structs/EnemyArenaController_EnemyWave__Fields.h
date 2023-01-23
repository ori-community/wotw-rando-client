#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_DEFINED)
#include <Modloader/app/structs/EnemyArenaController_WaveStatus__Enum.h>
#if defined(IL2CPP_STRUCT_EnemyArenaController_WaveStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_DEFINED
struct List_1_EntityPlaceholder_;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonReference_1_ICondition_;
struct MoonTimeline;
struct ICondition;
struct __declspec(align(8)) EnemyArenaController_EnemyWave__Fields {
    int32_t m_deathCount;
    struct List_1_EntityPlaceholder_* Placeholders;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnStartTimeline;
    struct MoonReference_1_ICondition_* ExtraCondition;
    EnemyArenaController_WaveStatus__Enum Status;

    struct MoonTimeline* m_onStartTimeline;
    struct ICondition* m_resolvedExtraCondition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_FWDDECL
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/List_1_EntityPlaceholder_.h>
#include <Modloader/app/structs/MoonReference_1_ICondition_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyArenaController_EnemyWave__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyArenaController_EnemyWave__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyArenaController_EnemyWave__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
