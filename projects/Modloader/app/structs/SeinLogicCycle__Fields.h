#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLogicCycle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLogicCycle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLogicCycle__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SeinAbilityRestrictZoneMask__Enum.h>
#include <Modloader/app/structs/SeinLogicCycle_StateFlags__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinLogicCycle_StateFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_SeinAbilityRestrictZoneMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SeinLogicCycle__Fields_DEFINED
struct SortedList_2_System_Int32_CharacterState_;
struct List_1_CharacterState_;
struct Dictionary_2_System_Type_System_Int32_;
struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate_;
struct List_1_System_Type_;
struct HashSet_1_CharacterState_;
struct CharacterState;
struct Boolean__Array;
struct PlayerUberState;
struct SeinLogicCycle__Fields {
    struct MonoBehaviour__Fields _;
    bool m_hasStateFlags;
    bool m_hasRestrictZoneMask;
    SeinLogicCycle_StateFlags__Enum m_stateFlags;

    SeinAbilityRestrictZoneMask__Enum m_restrictZoneMask;

    bool m_isTouchingDamageColliders;
    bool m_isAllowedNonZeroZPosition;
    int32_t m_currentAutoExecutionOrder;
    struct SortedList_2_System_Int32_CharacterState_* m_states;
    struct List_1_CharacterState_* m_statesList;
    struct Dictionary_2_System_Type_System_Int32_* m_executionOrders;
    struct Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate_* m_isAllowedDelegates;
    bool m_hasRegisteredDelegates;
    struct List_1_System_Type_* m_exclusiveActiveStateTypes;
    struct List_1_CharacterState_* m_exclusiveActiveStates;
    struct HashSet_1_CharacterState_* m_exclusiveActiveStatesSet;
    struct CharacterState* m_exclusiveActiveState;
    struct Boolean__Array* m_equipped;
    struct PlayerUberState* m_playerUberState;
    int32_t m_cachedUberStoreID;
    bool ShowDebug;
    struct Vector2 m_scroll;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLogicCycle__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLogicCycle__Fields_FWDDECL
#include <Modloader/app/structs/Boolean__Array.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_SeinLogicCycle_IsAllowedDelegate_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Int32_.h>
#include <Modloader/app/structs/HashSet_1_CharacterState_.h>
#include <Modloader/app/structs/List_1_CharacterState_.h>
#include <Modloader/app/structs/List_1_System_Type_.h>
#include <Modloader/app/structs/PlayerUberState.h>
#include <Modloader/app/structs/SortedList_2_System_Int32_CharacterState_.h>
#endif
#undef IL2CPP_STRUCT_SeinLogicCycle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLogicCycle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLogicCycle__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLogicCycle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLogicCycle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
