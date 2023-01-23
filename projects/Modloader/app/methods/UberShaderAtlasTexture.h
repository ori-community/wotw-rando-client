#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberShaderAtlasTexture.h>

namespace app::classes::UberShaderAtlasTexture {
    IL2CPP_REGISTER_METHOD(0x00953E60, void, UsePrefabAtlas, (app::UberShaderAtlasTexture * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::UberShaderAtlasTexture * this_ptr))
} // namespace app::classes::UberShaderAtlasTexture
