#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ComboMove.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMoveState__Enum.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_ComboInput_.h>
#include <Modloader/app/structs/SeinComboHandler.h>

namespace app::classes::Moon::ComboSystem::ComboMove {
    IL2CPP_REGISTER_METHOD(0x00CC5B40, void, ctor, (app::ComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::List_1_Moon_ComboSystem_ComboInput_*, get_ValidInputs, (app::ComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00980110, app::ComboMoveState__Enum, get_ComboMoveState, (app::ComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInitialize, (app::ComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB960, void, SetComboHandler, (app::ComboMove * this_ptr, app::SeinComboHandler* combo_attack))
    IL2CPP_REGISTER_METHOD(0x00CC5F60, app::ComboInput*, GetComboInput, (app::ComboMove * this_ptr, bool facing_left))
    IL2CPP_REGISTER_METHOD(0x00CC6200, bool, CanAcceptInput, (app::ComboMove * this_ptr, app::ComboInput* combo_input))
    IL2CPP_REGISTER_METHOD(0x00CC6320, bool, CanBeUsedAsComboEntryPoint, (app::ComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC6360, void, RegisterUse, (app::ComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CC6370, bool, get_BellowAmountOfUsesAllowed, (app::ComboMove * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008001B0, void, ResetAmountOfUses, (app::ComboMove * this_ptr))
} // namespace app::classes::Moon::ComboSystem::ComboMove
