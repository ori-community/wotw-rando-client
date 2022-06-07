#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GasballSpotOriBehaviour {
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::BehaviourStatus__Enum, get_StatusWhenPlaying, (app::GasballSpotOriBehaviour * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00420EF0, void, OnEnter, (app::GasballSpotOriBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420F00, void, OnExit, (app::GasballSpotOriBehaviour * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x00420FE0, void, ctor, (app::GasballSpotOriBehaviour * this_ptr))
}
