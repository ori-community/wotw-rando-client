#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UberShaderProperty {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::UberShaderBlock*, get_AttachedBlock, (app::UberShaderProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191A3A0, bool, get_HasMaterial, (app::UberShaderProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0191A500, app::Material*, GetMaterial, (app::UberShaderProperty * this_ptr, app::Renderer* renderer))
    IL2CPP_REGISTER_METHOD(0x0191A560, app::Material*, get_BindMaterial, (app::UberShaderProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB00, app::String*, get_BindName, (app::UberShaderProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB10, void, set_BindName, (app::UberShaderProperty * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00654950, int32_t, get_BindID, (app::UberShaderProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00654960, void, set_BindID, (app::UberShaderProperty * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x0191A6E0, void, Set, (app::UberShaderProperty * this_ptr, app::String* bind_name, app::UberShaderBlock* attached_block))
    IL2CPP_REGISTER_METHOD(0x0191A7C0, void, BindTexture, (app::UberShaderProperty * this_ptr, int32_t name_id, app::Texture* texture))
    IL2CPP_REGISTER_METHOD(0x0191AA00, void, BindColor, (app::UberShaderProperty * this_ptr, int32_t name_id, app::Color color))
    IL2CPP_REGISTER_METHOD(0x0191AC00, void, BindVector, (app::UberShaderProperty * this_ptr, int32_t name_id, app::Vector4 vector))
    IL2CPP_REGISTER_METHOD(0x0191AE70, void, BindFloat, (app::UberShaderProperty * this_ptr, int32_t name_id, float val))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberShaderProperty * this_ptr))
} // namespace app::classes::UberShaderProperty
