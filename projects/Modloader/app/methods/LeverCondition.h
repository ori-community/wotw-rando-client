#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/LeverCondition.h>

namespace app::classes::LeverCondition {
    IL2CPP_REGISTER_METHOD(0x01137C20, bool, Validate, app::LeverCondition* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::LeverCondition* this_ptr)
} // namespace app::classes::LeverCondition
