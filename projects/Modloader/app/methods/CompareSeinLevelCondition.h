#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CompareSeinLevelCondition {
    IL2CPP_REGISTER_METHOD(0x011DED30, bool, Validate, (app::CompareSeinLevelCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CompareSeinLevelCondition * this_ptr))
} // namespace app::classes::CompareSeinLevelCondition
