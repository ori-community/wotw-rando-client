#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Tilemaps::TileData {
    IL2CPP_REGISTER_METHOD(0x0010FD20, void, set_sprite, (app::TileData__Boxed * this_ptr, app::Sprite* value))
    IL2CPP_REGISTER_METHOD(0x001D9AD0, void, set_color, (app::TileData__Boxed * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x0024E800, void, set_transform, (app::TileData__Boxed * this_ptr, app::Matrix4x4 value))
    IL2CPP_REGISTER_METHOD(0x0010D440, void, set_gameObject, (app::TileData__Boxed * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x00111C30, void, set_flags, (app::TileData__Boxed * this_ptr, app::TileFlags__Enum value))
    IL2CPP_REGISTER_METHOD(0x00116360, void, set_colliderType, (app::TileData__Boxed * this_ptr, app::Tile_ColliderType__Enum value))
} // namespace app::classes::UnityEngine::Tilemaps::TileData
