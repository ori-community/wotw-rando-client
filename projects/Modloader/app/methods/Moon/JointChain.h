#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JointChain.h>

namespace app::classes::Moon::JointChain {
    IL2CPP_REGISTER_METHOD(0x01B16070, bool, get_IsValid, (app::JointChain * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::JointChain * this_ptr))
} // namespace app::classes::Moon::JointChain
