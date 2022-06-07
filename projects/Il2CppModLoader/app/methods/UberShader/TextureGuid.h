#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberShader::TextureGuid {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String *, get_Guid, (app::TextureGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Guid, (app::TextureGuid * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x017B44C0, bool, get_IsSet, (app::TextureGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018F9090, app::Texture2D *, get_Texture, (app::TextureGuid * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TextureGuid * this_ptr))
}
