#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnderWaterLineModifier {
    IL2CPP_REGISTER_METHOD(0x012AB640, void, SetProperties, (app::UnderWaterLineModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AB830, void, Update, (app::UnderWaterLineModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012AB8A0, void, ctor, (app::UnderWaterLineModifier * this_ptr))
} // namespace app::classes::UnderWaterLineModifier
