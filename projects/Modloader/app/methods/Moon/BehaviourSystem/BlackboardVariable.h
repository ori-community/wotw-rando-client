#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlackboardVariable.h>

namespace app::classes::Moon::BehaviourSystem::BlackboardVariable {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::BlackboardVariable* this_ptr)
}
