#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/TickData__Boxed.h>
#include <Modloader/app/structs/BehaviourTree_1.h>

namespace app::classes::UberBehaviourTree::TickData {
    IL2CPP_REGISTER_METHOD(0x0011D740, void, ctor, (app::TickData__Boxed * this_ptr, app::BehaviourTree_1* tree, float delta_time))
}
