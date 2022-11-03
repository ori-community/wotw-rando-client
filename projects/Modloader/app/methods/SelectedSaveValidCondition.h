#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::SelectedSaveValidCondition {
    IL2CPP_REGISTER_METHOD(0x00AB5750, bool, Validate, (app::SelectedSaveValidCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SelectedSaveValidCondition * this_ptr))
} // namespace app::classes::SelectedSaveValidCondition
