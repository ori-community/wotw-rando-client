#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpriteAtlasManager {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SpriteAtlasManager__Class** type_info;
        inline app::SpriteAtlasManager__Class* get_class() {
            return il2cpp::get_class<app::SpriteAtlasManager__Class>(type_info, "UnityEngine.U2D", "SpriteAtlasManager");
        }
        inline app::SpriteAtlasManager* create() {
            return il2cpp::create_object<app::SpriteAtlasManager>(get_class());
        }
    } // namespace SpriteAtlasManager
} // namespace app::classes::types
