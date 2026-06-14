#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/UberShaderMultiplyLayerColor.h>

namespace app::classes::UberShaderMultiplyLayerColor {
    IL2CPP_REGISTER_METHOD(0x01914590, float, CalculateColorComponentValue, app::UberShaderMultiplyLayerColor* this_ptr, float v)
    IL2CPP_REGISTER_METHOD(0x019145D0, app::Color, CalculateFinalMultiplyColor, app::UberShaderMultiplyLayerColor* this_ptr, app::Color color)
    IL2CPP_REGISTER_METHOD(0x019146A0, void, BindProperties, app::UberShaderMultiplyLayerColor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::Color, get_Color, app::UberShaderMultiplyLayerColor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01914780, void, set_Color, app::UberShaderMultiplyLayerColor* this_ptr, app::Color value)
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_R, app::UberShaderMultiplyLayerColor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0190CF30, void, set_R, app::UberShaderMultiplyLayerColor* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_G, app::UberShaderMultiplyLayerColor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01289F00, void, set_G, app::UberShaderMultiplyLayerColor* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_B, app::UberShaderMultiplyLayerColor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01289F20, void, set_B, app::UberShaderMultiplyLayerColor* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_A, app::UberShaderMultiplyLayerColor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01289F40, void, set_A, app::UberShaderMultiplyLayerColor* this_ptr, float value)
    IL2CPP_REGISTER_METHOD(0x01914860, void, ctor_1, app::UberShaderMultiplyLayerColor* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01914870, void, ctor_2, app::UberShaderMultiplyLayerColor* this_ptr, app::Color default_color)
} // namespace app::classes::UberShaderMultiplyLayerColor
