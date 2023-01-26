#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IsShowingQuestMessageCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::IsShowingQuestMessageCondition {
    IL2CPP_REGISTER_METHOD(0x00647C60, bool, Validate, (app::IsShowingQuestMessageCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsShowingQuestMessageCondition * this_ptr))
} // namespace app::classes::IsShowingQuestMessageCondition
