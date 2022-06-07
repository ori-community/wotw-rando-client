#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberWaterComponent {
    IL2CPP_REGISTER_METHOD(0x01293B10, app::UberWaterControl *, get_Control, (app::UberWaterComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01293C50, app::MeshFilter *, get_Filter, (app::UberWaterComponent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::UberWaterComponent * this_ptr))
}
