#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IKExecutionOrder.h>

namespace app::classes::RootMotion::FinalIK::IKExecutionOrder {
    IL2CPP_REGISTER_METHOD(0x02BDAD90, void, Start, app::IKExecutionOrder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02BDAE60, void, LateUpdate, app::IKExecutionOrder* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::IKExecutionOrder* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::IKExecutionOrder
