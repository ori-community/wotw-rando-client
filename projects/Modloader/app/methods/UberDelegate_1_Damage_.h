#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberDelegate_1_Damage_ {
    IL2CPP_REGISTER_METHOD(0x0225C400, void, Add, (app::UberDelegate_1_Damage_ * this_ptr, app::Action_1_Damage_* act))
    IL2CPP_REGISTER_METHODINFO(0x04721B40, UberDelegate_1_Damage__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225C9B0, void, Remove, (app::UberDelegate_1_Damage_ * this_ptr, app::Action_1_Damage_* act))
    IL2CPP_REGISTER_METHODINFO(0x04772220, UberDelegate_1_Damage__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0225C810, void, Call, (app::UberDelegate_1_Damage_ * this_ptr, app::Damage* act))
    IL2CPP_REGISTER_METHODINFO(0x0477FBB8, UberDelegate_1_Damage__Call__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::UberDelegate_1_Damage_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04757DD0, UberDelegate_1_Damage___ctor__MethodInfo)
} // namespace app::classes::UberDelegate_1_Damage_
