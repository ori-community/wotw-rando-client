#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourEvents.h>
#include <Modloader/app/structs/IBehaviourEvent.h>
#include <Modloader/app/structs/List_1_UberBehaviourTree_IBehaviourEvent_.h>

namespace app::classes::UberBehaviourTree::BehaviourEvents {
    IL2CPP_REGISTER_METHOD(0x013DF8E0, void, Send, (app::BehaviourEvents * this_ptr, app::IBehaviourEvent* e))
    IL2CPP_REGISTER_METHOD(0x013DFB40, app::List_1_UberBehaviourTree_IBehaviourEvent_*, Query, (app::BehaviourEvents * this_ptr, int32_t unique_event_id))
    IL2CPP_REGISTER_METHOD(0x013DFD50, void, Clear, (app::BehaviourEvents * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013DFEE0, void, ctor, (app::BehaviourEvents * this_ptr))
} // namespace app::classes::UberBehaviourTree::BehaviourEvents
