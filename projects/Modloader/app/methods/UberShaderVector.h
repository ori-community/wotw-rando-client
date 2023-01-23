#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderVector.h>
#include <Modloader/app/structs/Vector4.h>

namespace app::classes::UberShaderVector {
    IL2CPP_REGISTER_METHOD(0x01289810, void, ctor_1, (app::UberShaderVector * this_ptr, float x, float y, float z, float w))
    IL2CPP_REGISTER_METHOD(0x01289910, void, ctor_2, (app::UberShaderVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012899C0, void, BindProperties, (app::UberShaderVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289ED0, app::Vector4, get_VectorValue, (app::UberShaderVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289EE0, void, set_VectorValue, (app::UberShaderVector * this_ptr, app::Vector4 value))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_X, (app::UberShaderVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289F00, void, set_X, (app::UberShaderVector * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_Y, (app::UberShaderVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289F20, void, set_Y, (app::UberShaderVector * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_Z, (app::UberShaderVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289F40, void, set_Z, (app::UberShaderVector * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_W, (app::UberShaderVector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289F60, void, set_W, (app::UberShaderVector * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01289F80, float, get_Item, (app::UberShaderVector * this_ptr, int32_t key))
    IL2CPP_REGISTER_METHOD(0x01289FB0, void, set_Item, (app::UberShaderVector * this_ptr, int32_t key, float value))
    IL2CPP_REGISTER_METHOD(0x01289FE0, void, set_Scale, (app::UberShaderVector * this_ptr, float value))
} // namespace app::classes::UberShaderVector
