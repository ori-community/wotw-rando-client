#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameStateCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::GameStateCondition {
    IL2CPP_REGISTER_METHOD(0x00403F30, bool, Validate, (app::GameStateCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::GameStateCondition * this_ptr))
} // namespace app::classes::GameStateCondition
