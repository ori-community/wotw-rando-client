#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LoadingFinishedCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::LoadingFinishedCondition {
    IL2CPP_REGISTER_METHOD(0x00FC0C20, bool, Validate, (app::LoadingFinishedCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::LoadingFinishedCondition * this_ptr))
} // namespace app::classes::LoadingFinishedCondition
