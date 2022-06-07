#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TextureProvider {
    IL2CPP_REGISTER_METHOD(0x010EC660, app::Texture2D *, GetTexture, (app::TextureProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::TextureProvider * this_ptr))
}
