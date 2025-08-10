#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BehaviourTreeStatus__Enum.h>
#include <Modloader/app/structs/Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TickData.h>

namespace app::classes::System::Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_ {
    IL2CPP_REGISTER_METHOD(
        0x00611810,
        void,
        ctor,
        app::Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* this_ptr,
        app::Object* object,
        void* method_1
    )
    IL2CPP_REGISTER_METHOD(
        0x028872B0,
        app::BehaviourTreeStatus__Enum,
        Invoke,
        app::Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_* this_ptr,
        app::TickData arg
    )
} // namespace app::classes::System::Func_2_UberBehaviourTree_TickData_UberBehaviourTree_BehaviourTreeStatus_
