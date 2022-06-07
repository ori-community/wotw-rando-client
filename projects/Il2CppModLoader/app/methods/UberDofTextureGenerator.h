#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UberDofTextureGenerator {
    IL2CPP_REGISTER_METHOD(0x013E6B30, app::Material *, GetBlurMaterial, ())
    IL2CPP_REGISTER_METHOD(0x013E7060, app::Texture *, CreatePreviewDofTexture, (app::Texture2D * original_texture, app::Vector2 blur_size))
    IL2CPP_REGISTER_METHOD(0x013E7220, app::Texture *, CreateDofTexture_1, (app::Texture2D * original_texture, app::Vector2 blur_size))
    IL2CPP_REGISTER_METHOD(0x013E73A0, app::Texture *, CreateDofTextureNearestPot, (app::Texture * original_texture, app::Vector2 blur_size, app::Vector2 max_screen_size))
    IL2CPP_REGISTER_METHOD(0x013E76C0, app::Texture *, CreateDofTexture_2, (app::Texture * original_texture, app::Vector2 blur_size, int32_t texture_width, int32_t texture_height))
}
