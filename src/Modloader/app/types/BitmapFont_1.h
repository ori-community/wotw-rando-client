#pragma once
#include <Modloader/app/structs/BitmapFont_1.h>
#include <Modloader/app/structs/BitmapFont_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitmapFont_1 {
        inline app::BitmapFont_1__Class** type_info() {
            static app::BitmapFont_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BitmapFont_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BitmapFont_1__Class* get_class() {
            return il2cpp::get_class<app::BitmapFont_1__Class>(type_info(), "Moon.UI", "BitmapFont");
        }
        inline app::BitmapFont_1* create() {
            return il2cpp::create_object<app::BitmapFont_1>(get_class());
        }
    } // namespace BitmapFont_1
} // namespace app::classes::types
