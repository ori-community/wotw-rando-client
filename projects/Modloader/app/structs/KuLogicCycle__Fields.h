#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuLogicCycle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuLogicCycle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuLogicCycle__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_KuLogicCycle__Fields_DEFINED
struct Ku;
struct SortedList_2_System_Int32_KuState_;
struct List_1_KuState_;
struct Dictionary_2_System_Type_System_Int32_;
struct Dictionary_2_System_Type_KuLogicCycle_IsAllowedDelegate_;
struct List_1_System_Type_;
struct HashSet_1_KuState_;
struct KuState;
struct KuLogicCycle__Fields {
    struct MonoBehaviour__Fields _;
    struct Ku* m_ku;
    int32_t m_currentAutoExecutionOrder;
    struct SortedList_2_System_Int32_KuState_* m_states;
    struct List_1_KuState_* m_statesList;
    struct Dictionary_2_System_Type_System_Int32_* m_executionOrders;
    struct Dictionary_2_System_Type_KuLogicCycle_IsAllowedDelegate_* m_isAllowedDelegates;
    struct List_1_System_Type_* m_exclusiveActiveStateTypes;
    struct List_1_KuState_* m_exclusiveActiveStates;
    struct HashSet_1_KuState_* m_exclusiveActiveStatesSet;
    struct KuState* m_exclusiveActiveState;
    bool ShowDebug;
    struct Vector2 m_scroll;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuLogicCycle__Fields_FWDDECL)
#define IL2CPP_STRUCT_KuLogicCycle__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_KuLogicCycle_IsAllowedDelegate_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Int32_.h>
#include <Modloader/app/structs/HashSet_1_KuState_.h>
#include <Modloader/app/structs/Ku.h>
#include <Modloader/app/structs/KuState.h>
#include <Modloader/app/structs/List_1_KuState_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/SortedList_2_System_Int32_KuState_.h>
#endif
#undef IL2CPP_STRUCT_KuLogicCycle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuLogicCycle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KuLogicCycle__Fields_FWDDECL)
#include <Modloader/app/structs/KuLogicCycle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuLogicCycle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
