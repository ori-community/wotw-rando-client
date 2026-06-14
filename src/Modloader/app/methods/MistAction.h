#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/MistAction.h>

namespace app::classes::MistAction {
    IL2CPP_REGISTER_METHOD(0x013270E0, void, Perform, app::MistAction* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x005FC1E0, void, ctor, app::MistAction* this_ptr)
} // namespace app::classes::MistAction
