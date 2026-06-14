#pragma once
#include <Modloader/app/structs/SpriteTexture.h>
#include <Modloader/app/structs/SpriteTexture__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpriteTexture {
        inline app::SpriteTexture__Class** type_info() {
            static app::SpriteTexture__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpriteTexture__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpriteTexture__Class* get_class() {
            return il2cpp::get_class<app::SpriteTexture__Class>(type_info(), "", "SpriteTexture");
        }
        inline app::SpriteTexture* create() {
            return il2cpp::create_object<app::SpriteTexture>(get_class());
        }
    } // namespace SpriteTexture
} // namespace app::classes::types
