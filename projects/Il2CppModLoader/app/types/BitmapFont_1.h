#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BitmapFont_1 {
        namespace {
            app::BitmapFont_1__Class* type_info_ref = nullptr;
        }
        app::BitmapFont_1__Class** type_info = &type_info_ref;
        inline app::BitmapFont_1__Class* get_class() {
            return il2cpp::get_class<app::BitmapFont_1__Class>(type_info, "Moon.UI", "BitmapFont");
        }
        inline app::BitmapFont_1* create() {
            return il2cpp::create_object<app::BitmapFont_1>(get_class());
        }
    } // namespace BitmapFont_1
} // namespace app::classes::types
