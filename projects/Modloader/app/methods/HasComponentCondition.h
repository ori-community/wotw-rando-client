#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/HasComponentCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::HasComponentCondition {
    IL2CPP_REGISTER_METHOD(0x0109DD70, void, Start, (app::HasComponentCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0109DE40, bool, Validate, (app::HasComponentCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::HasComponentCondition * this_ptr))
} // namespace app::classes::HasComponentCondition
