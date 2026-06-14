#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_EvaluationMode__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UpdateType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UpdateType__Enum_DEFINED) && defined(IL2CPP_STRUCT_BehaviourTreeEvaluationSystem_EvaluationMode__Enum_DEFINED)
#define IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_DEFINED
struct BehaviourTreeEvaluationSystem_DistanceHeuristic;
struct BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool;
struct List_1_System_Int32_;
struct Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_;
struct BehaviourTreeEvaluationSystem__Fields {
    struct MonoBehaviour__Fields _;
    int32_t LeastSkips;
    UpdateType__Enum Update;

    BehaviourTreeEvaluationSystem_EvaluationMode__Enum Mode;

    struct BehaviourTreeEvaluationSystem_DistanceHeuristic* Distance;
    int32_t Interval;
    struct BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool* m_pool;
    struct List_1_System_Int32_* m_entriesIds;
    struct Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_* m_entries;
    int32_t m_framesSkiped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_FWDDECL
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_BehaviourTreeEntryPool.h>
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem_DistanceHeuristic.h>
#include <Modloader/app/structs/Dictionary_2_System_Int32_BehaviourTreeEvaluationSystem_BehaviourTreeEvaluationEntry_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourTreeEvaluationSystem__Fields_FWDDECL)
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourTreeEvaluationSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
