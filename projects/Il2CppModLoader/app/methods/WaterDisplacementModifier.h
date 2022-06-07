#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::WaterDisplacementModifier {
    IL2CPP_REGISTER_METHOD(0x008D63F0, void, SetProperties, (app::WaterDisplacementModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::WaterDisplacementModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresNormals, (app::WaterDisplacementModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008D64B0, void, ctor, (app::WaterDisplacementModifier * this_ptr))
}
