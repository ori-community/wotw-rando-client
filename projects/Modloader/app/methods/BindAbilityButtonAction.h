#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BindAbilityButtonAction.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::BindAbilityButtonAction {
    IL2CPP_REGISTER_METHOD(0x00D2AFD0, void, Perform, (app::BindAbilityButtonAction * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::BindAbilityButtonAction * this_ptr))
} // namespace app::classes::BindAbilityButtonAction
