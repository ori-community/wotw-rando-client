#pragma once
#include <Modloader/app/structs/TextureAnimationGUIText.h>
#include <Modloader/app/structs/TextureAnimationGUIText__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextureAnimationGUIText {
        inline app::TextureAnimationGUIText__Class** type_info() {
            static app::TextureAnimationGUIText__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextureAnimationGUIText__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextureAnimationGUIText__Class* get_class() {
            return il2cpp::get_class<app::TextureAnimationGUIText__Class>(type_info(), "", "TextureAnimationGUIText");
        }
        inline app::TextureAnimationGUIText* create() {
            return il2cpp::create_object<app::TextureAnimationGUIText>(get_class());
        }
    } // namespace TextureAnimationGUIText
} // namespace app::classes::types
