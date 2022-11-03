#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberShaderTextureCube {
    IL2CPP_REGISTER_METHOD(0x01289730, void, BindProperties, (app::UberShaderTextureCube * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBCD0, void, Initialize, (app::UberShaderTextureCube * this_ptr, app::Cubemap* texture))
    IL2CPP_REGISTER_METHOD(0x01289770, void, ctor, (app::UberShaderTextureCube * this_ptr))
} // namespace app::classes::UberShaderTextureCube
