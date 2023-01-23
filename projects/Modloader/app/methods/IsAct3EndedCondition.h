#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IsAct3EndedCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsAct3EndedCondition {
    IL2CPP_REGISTER_METHOD(0x00645C20, bool, Validate, (app::IsAct3EndedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsAct3EndedCondition * this_ptr))
} // namespace app::classes::IsAct3EndedCondition
