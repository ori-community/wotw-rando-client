#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComboMove__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComboMove__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComboMove__VTable_DEFINED)
#define IL2CPP_STRUCT_IComboMove__VTable_DEFINED
struct IComboMove__VTable {
    VirtualInvokeData get_MoveHasFinished;
    VirtualInvokeData get_ComboMoveType;
    VirtualInvokeData get_ButtonInputType;
    VirtualInvokeData get_IsAttackButtonDown;
    VirtualInvokeData get_OnAttackButtonPressed;
    VirtualInvokeData get_OnAttackButtonReleased;
    VirtualInvokeData CanExecute;
    VirtualInvokeData CanBeInterruptedBy;
    VirtualInvokeData CanInputBeQueued;
    VirtualInvokeData EnterMove;
    VirtualInvokeData UpdateMove;
    VirtualInvokeData ExitMove;
    VirtualInvokeData InterruptMove;
    VirtualInvokeData ModifyGravityPlatformMovementSettings;
    VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
    VirtualInvokeData get_MoveCooldown;
    VirtualInvokeData get_MoveCooldownTimer;
    VirtualInvokeData set_MoveCooldownTimer;
    VirtualInvokeData get_WasGroundedSinceLastExecution;
    VirtualInvokeData set_WasGroundedSinceLastExecution;
    VirtualInvokeData OnAnimationEvent;
};
#endif
#if !defined(IL2CPP_STRUCT_IComboMove__VTable_FWDDECL)
#define IL2CPP_STRUCT_IComboMove__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IComboMove__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComboMove__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IComboMove__VTable_FWDDECL)
#include <Modloader/app/structs/IComboMove__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComboMove__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
