#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/TextureProvider.h>

namespace app::classes::TextureProvider {
    IL2CPP_REGISTER_METHOD(0x010EC660, app::Texture2D*, GetTexture, (app::TextureProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004140E0, void, ctor, (app::TextureProvider * this_ptr))
} // namespace app::classes::TextureProvider
