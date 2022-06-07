#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MultiplyLayerExtraModifier {
    IL2CPP_REGISTER_METHOD(0x0087BFC0, void, ApplyMultipliers, (app::MultiplyLayerExtraModifier * this_ptr, float strength, float speed))
    IL2CPP_REGISTER_METHOD(0x0087C050, void, SetProperties, (app::MultiplyLayerExtraModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C180, bool, get_IsWorldRotation, (app::MultiplyLayerExtraModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C1C0, bool, DoStrip, (app::MultiplyLayerExtraModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C200, void, Update, (app::MultiplyLayerExtraModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C240, void, UpdateWorldRotation, (app::MultiplyLayerExtraModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087C430, void, ctor, (app::MultiplyLayerExtraModifier * this_ptr))
}
