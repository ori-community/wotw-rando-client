#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Tile.h>
#include <Modloader/app/structs/Sprite.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/TileFlags__Enum.h>
#include <Modloader/app/structs/Tile_ColliderType__Enum.h>
#include <Modloader/app/structs/Vector3Int.h>
#include <Modloader/app/structs/ITilemap.h>
#include <Modloader/app/structs/TileData.h>

namespace app::classes::UnityEngine::Tilemaps::Tile {
    IL2CPP_REGISTER_METHOD(0x031BEEA0, void, ctor, (app::Tile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01F25880, app::Sprite*, get_sprite, (app::Tile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB940, void, set_sprite, (app::Tile * this_ptr, app::Sprite* value))
    IL2CPP_REGISTER_METHOD(0x031BEF90, app::Color, get_color, (app::Tile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02071D00, void, set_color, (app::Tile * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x031BEFA0, app::Matrix4x4, get_transform, (app::Tile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BEFD0, void, set_transform, (app::Tile * this_ptr, app::Matrix4x4 value))
    IL2CPP_REGISTER_METHOD(0x029F05B0, app::GameObject*, get_gameObject, (app::Tile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBD0, void, set_gameObject, (app::Tile * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x031BEFF0, app::TileFlags__Enum, get_flags, (app::Tile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B0E550, void, set_flags, (app::Tile * this_ptr, app::TileFlags__Enum value))
    IL2CPP_REGISTER_METHOD(0x031BF000, app::Tile_ColliderType__Enum, get_colliderType, (app::Tile * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012C9CC0, void, set_colliderType, (app::Tile * this_ptr, app::Tile_ColliderType__Enum value))
    IL2CPP_REGISTER_METHOD(0x031BF010, void, GetTileData, (app::Tile * this_ptr, app::Vector3Int position, app::ITilemap* tilemap, app::TileData* tile_data))
} // namespace app::classes::UnityEngine::Tilemaps::Tile
