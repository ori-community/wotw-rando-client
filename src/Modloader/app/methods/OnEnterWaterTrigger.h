#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/OnEnterWaterTrigger.h>

namespace app::classes::OnEnterWaterTrigger {
    IL2CPP_REGISTER_METHOD(0x00611B70, void, FixedUpdate, app::OnEnterWaterTrigger* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00611C70, void, ctor, app::OnEnterWaterTrigger* this_ptr)
} // namespace app::classes::OnEnterWaterTrigger
