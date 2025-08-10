#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HasShardCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasShardCondition {
    IL2CPP_REGISTER_METHOD(0x0109EEF0, bool, Validate, app::HasShardCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x008223A0, void, ctor, app::HasShardCondition* this_ptr)
} // namespace app::classes::HasShardCondition
