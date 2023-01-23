#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartLogicCycle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartLogicCycle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartLogicCycle__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_CartLogicCycle__Fields_DEFINED
struct Cart;
struct SortedList_2_System_Int32_CharacterState_;
struct Dictionary_2_System_Type_System_Int32_;
struct Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_;
struct List_1_System_Type_;
struct List_1_CharacterState_;
struct CharacterState;
struct CartLogicCycle__Fields {
    struct MonoBehaviour__Fields _;
    struct Cart* Cart;
    int32_t m_currentAutoExecutionOrder;
    struct SortedList_2_System_Int32_CharacterState_* m_states;
    struct Dictionary_2_System_Type_System_Int32_* m_executionOrders;
    struct Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_* m_isAllowedDelegates;
    struct List_1_System_Type_* m_exclusiveActiveStateTypes;
    struct List_1_CharacterState_* m_exclusiveActiveStates;
    struct CharacterState* m_exclusiveActiveState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartLogicCycle__Fields_FWDDECL)
#define IL2CPP_STRUCT_CartLogicCycle__Fields_FWDDECL
#include <Modloader/app/structs/Cart.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_CartLogicCycle_IsAllowedDelegate_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Int32_.h>
#include <Modloader/app/structs/List_1_CharacterState_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/SortedList_2_System_Int32_CharacterState_.h>
#endif
#undef IL2CPP_STRUCT_CartLogicCycle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartLogicCycle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CartLogicCycle__Fields_FWDDECL)
#include <Modloader/app/structs/CartLogicCycle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartLogicCycle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
