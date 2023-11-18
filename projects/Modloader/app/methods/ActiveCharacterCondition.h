#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ActiveCharacterCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ActiveCharacterCondition {
    IL2CPP_REGISTER_METHOD(0x004C9830, bool, Validate, (app::ActiveCharacterCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::ActiveCharacterCondition * this_ptr))
} // namespace app::classes::ActiveCharacterCondition
