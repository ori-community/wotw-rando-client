#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitmapFont {
        namespace {
            app::BitmapFont__Class* type_info_ref = nullptr;
        }
        app::BitmapFont__Class** type_info = &type_info_ref;
        inline app::BitmapFont__Class* get_class() {
            return il2cpp::get_class<app::BitmapFont__Class>(type_info, "CatlikeCoding.TextBox", "BitmapFont");
        }
        inline app::BitmapFont* create() {
            return il2cpp::create_object<app::BitmapFont>(get_class());
        }
    } // namespace BitmapFont
} // namespace app::classes::types
