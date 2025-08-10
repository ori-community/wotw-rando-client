#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ChangeLeverDirectionAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::ChangeLeverDirectionAction {
    IL2CPP_REGISTER_METHOD(0x004994E0, float, get_Duration, app::ChangeLeverDirectionAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01045ED0, void, set_Duration, app::ChangeLeverDirectionAction* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01045EE0, void, Perform, app::ChangeLeverDirectionAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Stop, app::ChangeLeverDirectionAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01045F10, bool, get_IsPerforming, app::ChangeLeverDirectionAction* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0043BB90, void, ctor, app::ChangeLeverDirectionAction* this_ptr)
} // namespace app::classes::ChangeLeverDirectionAction
