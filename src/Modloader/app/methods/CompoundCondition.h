#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompoundCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::CompoundCondition {
    IL2CPP_REGISTER_METHOD(0x011E18A0, bool, Validate, app::CompoundCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x011E1B50, void, ctor, app::CompoundCondition* this_ptr)
} // namespace app::classes::CompoundCondition
