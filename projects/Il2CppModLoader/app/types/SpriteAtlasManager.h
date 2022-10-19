#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpriteAtlasManager {
        inline app::SpriteAtlasManager__Class** type_info = (app::SpriteAtlasManager__Class**)(modloader::win::memory::resolve_rva(0x0477F1D0));
        inline app::SpriteAtlasManager__Class* get_class() {
            return il2cpp::get_class<app::SpriteAtlasManager__Class>(type_info, "UnityEngine.U2D", "SpriteAtlasManager");
        }
        inline app::SpriteAtlasManager* create() {
            return il2cpp::create_object<app::SpriteAtlasManager>(get_class());
        }
    } // namespace SpriteAtlasManager
} // namespace app::classes::types
