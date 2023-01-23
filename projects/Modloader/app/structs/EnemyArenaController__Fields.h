#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyArenaController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyArenaController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaController__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_EnemyArenaController__Fields_DEFINED
struct MoonReference_1_ICondition_;
struct SerializedBooleanUberState;
struct IntUberState;
struct List_1_EnemyArenaController_EnemyWave_;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct MoonTimeline;
struct ICondition;
struct List_1_Moon_Entity_;
struct IUberState__Array;
struct List_1_UnityEngine_GameObject_;
struct Dictionary_2_System_Int32_System_String_;
struct EnemyArenaController__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_ICondition_* StartCondition;
    struct SerializedBooleanUberState* CompletedState;
    bool IsReplayable;
    struct IntUberState* OptionalWaveState;
    struct List_1_EnemyArenaController_EnemyWave_* m_waves;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* OnArenaEndTimeline;
    bool CreateCheckpointOnArenaCompleted;
    struct CheckpointFunctionality Checkpoint;
    int32_t m_noStateWaveIndex;
    struct MoonTimeline* m_onArenaEndTimeline;
    struct ICondition* m_startConditionResolved;
    struct List_1_Moon_Entity_* m_entitiesAlive;
    struct IUberState__Array* m_states;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    bool _InvalidateParentTimelineCache_k__BackingField;
    struct Dictionary_2_System_Int32_System_String_* m_conditionNameMap;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyArenaController__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyArenaController__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_String_.h>
#include <Modloader/app/structs/ICondition.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/IntUberState.h>
#include <Modloader/app/structs/List_1_EnemyArenaController_EnemyWave_.h>
#include <Modloader/app/structs/List_1_Moon_Entity_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonReference_1_ICondition_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_EnemyArenaController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyArenaController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyArenaController__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyArenaController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyArenaController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
