#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BTContext.h>

namespace app::classes::Moon::BehaviourSystem::BTContext {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BTContext * this_ptr))
}
