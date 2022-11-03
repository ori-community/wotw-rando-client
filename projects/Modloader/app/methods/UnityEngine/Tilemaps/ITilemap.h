#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityEngine::Tilemaps::ITilemap {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ITilemap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031BECC0, void, RefreshTile, (app::ITilemap * this_ptr, app::Vector3Int position))
    IL2CPP_REGISTER_METHOD(0x031BED40, app::ITilemap*, CreateInstance, ())
} // namespace app::classes::UnityEngine::Tilemaps::ITilemap
