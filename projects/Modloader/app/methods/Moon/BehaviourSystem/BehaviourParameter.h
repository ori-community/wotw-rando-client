#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourParameter.h>

namespace app::classes::Moon::BehaviourSystem::BehaviourParameter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::BehaviourParameter * this_ptr))
}
