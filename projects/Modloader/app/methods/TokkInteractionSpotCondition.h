#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/TokkInteractionSpotCondition.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::TokkInteractionSpotCondition {
    IL2CPP_REGISTER_METHOD(0x00AFE590, bool, Validate, (app::TokkInteractionSpotCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TokkInteractionSpotCondition * this_ptr))
} // namespace app::classes::TokkInteractionSpotCondition
