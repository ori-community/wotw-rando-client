#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlackboardVariable_1_System_Double_.h>
#include <Modloader/app/structs/IMoonType_1_System_Double_.h>

namespace app::classes::Moon::BehaviourSystem::BlackboardVariable_1_System_Double_ {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::IMoonType_1_System_Double_*, GetMoonType, app::BlackboardVariable_1_System_Double_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::BlackboardVariable_1_System_Double_* this_ptr)
} // namespace app::classes::Moon::BehaviourSystem::BlackboardVariable_1_System_Double_
