#pragma once
#include <Modloader/app/structs/SpriteAtlas.h>
#include <Modloader/app/structs/SpriteAtlas__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteAtlas {
        inline app::SpriteAtlas__Class** type_info() {
            static app::SpriteAtlas__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteAtlas__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteAtlas__Class* get_class() {
            return il2cpp::get_class<app::SpriteAtlas__Class>(type_info(), "UnityEngine.U2D", "SpriteAtlas");
        }
        inline app::SpriteAtlas* create() {
            return il2cpp::create_object<app::SpriteAtlas>(get_class());
        }
    } // namespace SpriteAtlas
} // namespace app::classes::types
