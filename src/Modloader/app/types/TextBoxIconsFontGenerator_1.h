#pragma once
#include <Modloader/app/structs/TextBoxIconsFontGenerator_1.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxIconsFontGenerator_1 {
        inline app::TextBoxIconsFontGenerator_1__Class** type_info() {
            static app::TextBoxIconsFontGenerator_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextBoxIconsFontGenerator_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextBoxIconsFontGenerator_1__Class* get_class() {
            return il2cpp::get_class<app::TextBoxIconsFontGenerator_1__Class>(type_info(), "Moon.UI", "TextBoxIconsFontGenerator");
        }
        inline app::TextBoxIconsFontGenerator_1* create() {
            return il2cpp::create_object<app::TextBoxIconsFontGenerator_1>(get_class());
        }
    } // namespace TextBoxIconsFontGenerator_1
} // namespace app::classes::types
