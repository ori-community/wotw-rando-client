#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/UberDelegate_1_Damage_.h>
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::UberDelegate_1_Damage_ {
    IL2CPP_REGISTER_METHOD(0x0225C400, void, Add, (app::UberDelegate_1_Damage_ * this_ptr, app::Action_1_Damage_* act))
    IL2CPP_REGISTER_METHOD(0x0225C9B0, void, Remove, (app::UberDelegate_1_Damage_ * this_ptr, app::Action_1_Damage_* act))
    IL2CPP_REGISTER_METHOD(0x0225C810, void, Call, (app::UberDelegate_1_Damage_ * this_ptr, app::Damage* act))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::UberDelegate_1_Damage_ * this_ptr))
} // namespace app::classes::UberDelegate_1_Damage_
