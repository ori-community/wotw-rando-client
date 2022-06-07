#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::TextureMaskEntry {
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Texture2D *, get_SourceTexture, (app::TextureMaskEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9A0, void, set_SourceTexture, (app::TextureMaskEntry * this_ptr, app::Texture2D * value))
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::Rect, get_SourceTextureBounds, (app::TextureMaskEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CE0, void, set_SourceTextureBounds, (app::TextureMaskEntry * this_ptr, app::Rect value))
    IL2CPP_REGISTER_METHOD(0x006B5650, float, get_ScaleMultiplier, (app::TextureMaskEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F5E0, void, set_ScaleMultiplier, (app::TextureMaskEntry * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0098F4A0, bool, get_IsValid, (app::TextureMaskEntry * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0098F4B0, void, set_IsValid, (app::TextureMaskEntry * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TextureMaskEntry * this_ptr, app::GameObject * source, int32_t width, int32_t height))
    IL2CPP_REGISTER_METHOD(0x010EB030, app::Vector2, GetNomalizeCoords, (app::TextureMaskEntry * this_ptr, int32_t x, int32_t y))
    IL2CPP_REGISTER_METHOD(0x010EB060, app::Nullable_1_UnityEngine_Color_, SampleSourceTexture, (app::TextureMaskEntry * this_ptr, int32_t x, int32_t y, app::Rect canvas_world_space_rect))
    IL2CPP_REGISTER_METHOD(0x010EB090, app::Vector2, RotateUV, (app::TextureMaskEntry * this_ptr, app::Vector2 uv, float angle, app::Vector2 pivot, float scale_multiplier))
    IL2CPP_REGISTER_METHOD(0x010EB7A0, app::Texture2D *, DuplicateTexture, (app::TextureMaskEntry * this_ptr, app::Texture2D * source))
}
