#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityEngine::Tilemaps::Tilemap {
    IL2CPP_REGISTER_METHOD(0x031BF230, void, RefreshTile, (app::Tilemap * this_ptr, app::Vector3Int position))
    IL2CPP_REGISTER_METHOD(0x031BF290, void, RefreshTile_Injected, (app::Tilemap * this_ptr, app::Vector3Int * position))
}
