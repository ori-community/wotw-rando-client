#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/BehaviourState.h>
#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::UberBehaviourTree::BehaviourState {
    IL2CPP_REGISTER_METHOD(
        0x013E0050,
        void,
        ctor,
        app::BehaviourState* this_ptr,
        app::String* name,
        app::Action* on_begin,
        app::Action* on_interrupt,
        app::Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* on_update
    )
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_Name, app::BehaviourState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_Name, app::BehaviourState* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x013E0070, void, OnBegin, app::BehaviourState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E0090, void, OnInterrupt, app::BehaviourState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x013E00B0, app::BehaviourTreeStatus__Enum, OnUpdate, app::BehaviourState* this_ptr, app::TickData tick)
} // namespace app::classes::UberBehaviourTree::BehaviourState
