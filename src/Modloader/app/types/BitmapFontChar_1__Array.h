#pragma once
#include <Modloader/app/structs/BitmapFontChar_1__Array.h>
#include <Modloader/app/structs/BitmapFontChar_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BitmapFontChar_1__Array {
        inline app::BitmapFontChar_1__Array__Class** type_info() {
            static app::BitmapFontChar_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BitmapFontChar_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BitmapFontChar_1__Array__Class* get_class() {
            return il2cpp::get_class<app::BitmapFontChar_1__Array__Class>(type_info(), "Moon.UI", "BitmapFontChar[]");
        }
        inline app::BitmapFontChar_1__Array* create() {
            return il2cpp::create_object<app::BitmapFontChar_1__Array>(get_class());
        }
    } // namespace BitmapFontChar_1__Array
} // namespace app::classes::types
