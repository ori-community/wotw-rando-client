#pragma once
#include <Modloader/app/structs/SpriteAtlasManager.h>
#include <Modloader/app/structs/SpriteAtlasManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAtlasManager {
        inline app::SpriteAtlasManager__Class** type_info() {
            static app::SpriteAtlasManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpriteAtlasManager__Class**)(modloader::win::memory::resolve_rva(0x0477F1D0));
            }
            return cache;
        }
        inline app::SpriteAtlasManager__Class* get_class() {
            return il2cpp::get_class<app::SpriteAtlasManager__Class>(type_info(), "UnityEngine.U2D", "SpriteAtlasManager");
        }
        inline app::SpriteAtlasManager* create() {
            return il2cpp::create_object<app::SpriteAtlasManager>(get_class());
        }
    } // namespace SpriteAtlasManager
} // namespace app::classes::types
