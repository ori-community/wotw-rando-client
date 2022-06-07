#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TokkInteractionSpotCondition {
    IL2CPP_REGISTER_METHOD(0x00AFE590, bool, Validate, (app::TokkInteractionSpotCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TokkInteractionSpotCondition * this_ptr))
}
