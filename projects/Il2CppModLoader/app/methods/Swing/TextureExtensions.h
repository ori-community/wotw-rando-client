#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Swing::TextureExtensions {
    IL2CPP_REGISTER_METHOD(0x0182FB70, float, ratio, (app::Texture * _this))
    IL2CPP_REGISTER_METHOD(0x0182FBD0, app::Int2, size, (app::Texture * _this))
    IL2CPP_REGISTER_METHOD(0x0182FC20, int32_t, pixelCount, (app::Texture2D * _texture))
    IL2CPP_REGISTER_METHOD(0x0182FC70, bool, hasMipmaps, (app::Texture2D * _texture))
    IL2CPP_REGISTER_METHOD(0x0182FCE0, float, bpp, (app::TextureFormat__Enum _format))
    IL2CPP_REGISTER_METHOD(0x0182FD30, int32_t, vramSize, (app::Texture2D * _texture))
    IL2CPP_REGISTER_METHOD(0x0182FF30, void, fill, (app::Texture2D * _this, app::Color _color))
    IL2CPP_REGISTER_METHOD(0x01830000, void, copyTo, (app::Texture2D * _source, app::Texture2D* _dest))
} // namespace app::classes::Swing::TextureExtensions
