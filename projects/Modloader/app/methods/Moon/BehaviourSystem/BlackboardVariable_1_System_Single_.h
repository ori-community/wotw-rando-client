#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlackboardVariable_1_System_Single_.h>
#include <Modloader/app/structs/IMoonType_1_System_Single_.h>

namespace app::classes::Moon::BehaviourSystem::BlackboardVariable_1_System_Single_ {
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::BlackboardVariable_1_System_Single_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Single_*, GetMoonType, app::BlackboardVariable_1_System_Single_* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::BlackboardVariable_1_System_Single_
