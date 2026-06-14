#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritSpearComboMove__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritSpearComboMove__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritSpearComboMove__VTable_DEFINED)
#define IL2CPP_STRUCT_SpiritSpearComboMove__VTable_DEFINED
struct SpiritSpearComboMove__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_m_comboMoveState;
    VirtualInvokeData set_m_comboMoveState;
    VirtualInvokeData get_ComboAbilityType;
    VirtualInvokeData OnInitialize;
    VirtualInvokeData EnterMove;
    VirtualInvokeData UpdateMove;
    VirtualInvokeData ExitMove;
    VirtualInvokeData get_IsAttackButtonDown;
    VirtualInvokeData get_OnAttackButtonPressed;
    VirtualInvokeData get_OnAttackButtonReleased;
    VirtualInvokeData CanExecute;
    VirtualInvokeData Interrupt;
    VirtualInvokeData ModifyGravityPlatformMovementSettings;
    VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
    VirtualInvokeData OnAnimationEvent;
    VirtualInvokeData get_CharacterState;
    VirtualInvokeData get_TimeToStartComboWindow;
};
#endif
#if !defined(IL2CPP_STRUCT_SpiritSpearComboMove__VTable_FWDDECL)
#define IL2CPP_STRUCT_SpiritSpearComboMove__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpiritSpearComboMove__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritSpearComboMove__VTable_DEFINED) && !defined(IL2CPP_STRUCT_SpiritSpearComboMove__VTable_FWDDECL)
#include <Modloader/app/structs/SpiritSpearComboMove__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritSpearComboMove__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
