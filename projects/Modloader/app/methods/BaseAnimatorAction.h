#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/BaseAnimatorAction.h>
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::BaseAnimatorAction {
    IL2CPP_REGISTER_METHOD(0x00F85310, void, Start, (app::BaseAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F85420, void, Perform, (app::BaseAnimatorAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F85950, app::String*, get_TargetName, (app::BaseAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F85AE0, app::String*, GetNiceName, (app::BaseAnimatorAction * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::BaseAnimatorAction * this_ptr))
} // namespace app::classes::BaseAnimatorAction
