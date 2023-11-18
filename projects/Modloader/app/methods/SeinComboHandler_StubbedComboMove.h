#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SeinComboHandler_StubbedComboMove.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/ButtonInputType__Enum.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMoveType__Enum.h>
#include <Modloader/app/structs/GravityPlatformMovementSettings.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/SeinController3D_EventId__Enum.h>

namespace app::classes::SeinComboHandler_StubbedComboMove {
    IL2CPP_REGISTER_METHOD(0x002FB980, void, ctor, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::ComboMoveType__Enum move_type))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IComboMove*, GetComboMove, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::ComboInput* input))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::ButtonInputType__Enum, get_ButtonInputType, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_Moon_ComboSystem_IComboMove_*, get_ComboMoves, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_ComboMoves, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::List_1_Moon_ComboSystem_IComboMove_* value))
    IL2CPP_REGISTER_METHOD(0x0052A280, app::AbilityType__Enum, get_ComboAbilityType, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_ComboAbilityType, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::AbilityType__Enum value))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_ProviderCooldown, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_ProviderCooldown, (app::SeinComboHandler_StubbedComboMove * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00418FC0, float, get_ProviderCooldownTimer, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64050, void, set_ProviderCooldownTimer, (app::SeinComboHandler_StubbedComboMove * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x007EC400, bool, get_MoveHasFinished, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007EC410, void, set_MoveHasFinished, (app::SeinComboHandler_StubbedComboMove * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB970, app::ComboMoveType__Enum, get_ComboMoveType, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB980, void, set_ComboMoveType, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::ComboMoveType__Enum value))
    IL2CPP_REGISTER_METHOD(0x0052A110, bool, get_IsAttackButtonDown, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A120, void, set_IsAttackButtonDown, (app::SeinComboHandler_StubbedComboMove * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00A64060, bool, get_OnAttackButtonPressed, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64070, void, set_OnAttackButtonPressed, (app::SeinComboHandler_StubbedComboMove * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00A64080, bool, get_OnAttackButtonReleased, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00A64090, void, set_OnAttackButtonReleased, (app::SeinComboHandler_StubbedComboMove * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanExecute, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, CanBeInterruptedBy, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::IComboMove* move))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, CanInputBeQueued, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnterMove, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, UpdateMove, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ExitMove, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InterruptMove, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyGravityPlatformMovementSettings, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::GravityPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ModifyHorizontalPlatformMovementSettings, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::HorizontalPlatformMovementSettings* settings))
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_MoveCooldown, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00724010, void, set_MoveCooldown, (app::SeinComboHandler_StubbedComboMove * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00447340, float, get_MoveCooldownTimer, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447350, void, set_MoveCooldownTimer, (app::SeinComboHandler_StubbedComboMove * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_WasGroundedSinceLastExecution, (app::SeinComboHandler_StubbedComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_WasGroundedSinceLastExecution, (app::SeinComboHandler_StubbedComboMove * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnAnimationEvent, (app::SeinComboHandler_StubbedComboMove * this_ptr, app::SeinController3D_EventId__Enum event_id))
} // namespace app::classes::SeinComboHandler_StubbedComboMove
