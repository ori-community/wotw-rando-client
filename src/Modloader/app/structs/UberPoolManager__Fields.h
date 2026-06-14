#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolManager__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolManager__Fields_DEFINED
struct String;
struct List_1_UberPoolPrefabSetting_;
struct List_1_UberPoolGroup_;
struct Dictionary_2_System_String_System_Int32_;
struct Dictionary_2_System_Int32_UberPoolItem_;
struct Dictionary_2_System_Int32_List_1_System_Action_;
struct Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_;
struct List_1_UberPoolManager_ObjectTracking_;
struct Stopwatch;
struct Queue_1_System_ValueTuple_2_;
struct Queue_1_UnityEngine_Transform_;
struct Dictionary_2_System_ValueTuple_2_System_ValueTuple_3_;
struct UberPoolManager_ContinuousTimesliceJob;
struct UberPoolManager__Fields {
    struct MonoBehaviour__Fields _;
    int32_t InstantiationsPooled;
    int32_t InstantiationsUnpooled;
    int32_t InstantiationsExhausted;
    int32_t TotalActiveInstantiations;
    struct String* SearchString;
    bool DisableInactivityPruning;
    struct String* LookUp;
    int32_t m_groupUpdateIdx;
    struct List_1_UberPoolPrefabSetting_* Settings;
    struct List_1_UberPoolGroup_* m_groups;
    struct Dictionary_2_System_String_System_Int32_* m_objectToPool;
    struct Dictionary_2_System_Int32_UberPoolItem_* m_spawnedToItem;
    struct Dictionary_2_System_Int32_List_1_System_Action_* m_releaseActions;
    struct Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_* m_moonEffectsToRevert;
    struct List_1_UberPoolManager_ObjectTracking_* m_moonEffectsRoots;
    struct Stopwatch* m_stopwatch;
    struct Queue_1_System_ValueTuple_2_* m_prewarmFromSceneQueueWithHighPriority;
    struct Queue_1_System_ValueTuple_2_* m_prewarmFromSceneQueue;
    struct Queue_1_System_ValueTuple_2_* m_prewarmTempQueue;
    struct Queue_1_UnityEngine_Transform_* m_destructionQueue;
    struct Dictionary_2_System_ValueTuple_2_System_ValueTuple_3_* m_transferToScene;
    struct Dictionary_2_System_String_System_Int32_* m_pendingPrewarmCount;
    int32_t m_totalPendingPrewarmCount;
    struct UberPoolManager_ContinuousTimesliceJob* m_prewarmTimesliceWithHighPriorityJob;
    struct UberPoolManager_ContinuousTimesliceJob* m_prewarmTimesliceJob;
    struct UberPoolManager_ContinuousTimesliceJob* m_destroyQueueTimesliceJob;
    struct UberPoolManager_ContinuousTimesliceJob* m_transferTimesliceJob;
    bool m_doPool;
    bool m_doAnalysis;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolManager__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_List_1_System_Action_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_Moon_EffectsFramework_MoonEffectRevertHandle_.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_UberPoolItem_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Int32_.h>
#include <Modloader/app/structs/Dictionary_2_System_ValueTuple_2_System_ValueTuple_3_.h>
#include <Modloader/app/structs/List_1_UberPoolGroup_.h>
#include <Modloader/app/structs/List_1_UberPoolManager_ObjectTracking_.h>
#include <Modloader/app/structs/List_1_UberPoolPrefabSetting_.h>
#include <Modloader/app/structs/Queue_1_System_ValueTuple_2_.h>
#include <Modloader/app/structs/Queue_1_UnityEngine_Transform_.h>
#include <Modloader/app/structs/Stopwatch.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberPoolManager_ContinuousTimesliceJob.h>
#endif
#undef IL2CPP_STRUCT_UberPoolManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolManager__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
