#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GravityToGroundSurface {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_RequiresNightberry, (app::GravityToGroundSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_RequiresCart, (app::GravityToGroundSurface * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Serialize, (app::GravityToGroundSurface * this_ptr, app::Archive* ar))
    IL2CPP_REGISTER_METHOD(0x0044C850, void, ctor, (app::GravityToGroundSurface * this_ptr))
} // namespace app::classes::GravityToGroundSurface
