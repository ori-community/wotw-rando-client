#pragma once
#include <Modloader/app/structs/BitmapFont.h>
#include <Modloader/app/structs/BitmapFont__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitmapFont {
        inline app::BitmapFont__Class** type_info() {
            static app::BitmapFont__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BitmapFont__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BitmapFont__Class* get_class() {
            return il2cpp::get_class<app::BitmapFont__Class>(type_info(), "CatlikeCoding.TextBox", "BitmapFont");
        }
        inline app::BitmapFont* create() {
            return il2cpp::create_object<app::BitmapFont>(get_class());
        }
    } // namespace BitmapFont
} // namespace app::classes::types
