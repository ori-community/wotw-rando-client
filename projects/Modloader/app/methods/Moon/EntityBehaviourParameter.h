#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityBehaviourParameter.h>

namespace app::classes::Moon::EntityBehaviourParameter {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::EntityBehaviourParameter * this_ptr))
}
