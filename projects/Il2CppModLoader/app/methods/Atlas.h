#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Atlas {
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_TexturePath, (app::Atlas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9C0, void, set_TexturePath, (app::Atlas * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00844A30, app::AtlasSpriteTexture*, FindAtlasSprite, (app::Atlas * this_ptr, app::MoonGuid* guid))
    IL2CPP_REGISTER_METHOD(0x00844CC0, void, InitCache, (app::Atlas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00844E40, void, ClearData, (app::Atlas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00844F00, app::AtlasSpriteTexture*, AddFrameTexture, (app::Atlas * this_ptr, app::String* frame_name, app::Vector2 center_offset, app::Vector2 original_size, app::Rect normalized_rect, bool flipped, app::MoonGuid* guid))
    IL2CPP_REGISTER_METHOD(0x00845150, void, InvalidateCache, (app::Atlas * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008451E0, void, ctor, (app::Atlas * this_ptr))
} // namespace app::classes::Atlas
