#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Tilemap.h>
#include <Modloader/app/structs/Vector3Int.h>

namespace app::classes::UnityEngine::Tilemaps::Tilemap {
    IL2CPP_REGISTER_METHOD(0x031BF230, void, RefreshTile, (app::Tilemap * this_ptr, app::Vector3Int position))
    IL2CPP_REGISTER_METHOD(0x031BF290, void, RefreshTile_Injected, (app::Tilemap * this_ptr, app::Vector3Int* position))
} // namespace app::classes::UnityEngine::Tilemaps::Tilemap
