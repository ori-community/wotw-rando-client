#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberShader::ShaderProperty {
    IL2CPP_REGISTER_METHOD(0x001533D0, void, ctor, (app::ShaderProperty__Boxed * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x00107C00, app::String*, get_Name, (app::ShaderProperty__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0010A860, int32_t, get_Id, (app::ShaderProperty__Boxed * this_ptr))
} // namespace app::classes::UberShader::ShaderProperty
