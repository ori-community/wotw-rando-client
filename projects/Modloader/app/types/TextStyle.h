#pragma once
#include <Modloader/app/structs/TextStyle.h>
#include <Modloader/app/structs/TextStyle__Array.h>
#include <Modloader/app/structs/TextStyle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextStyle {
        inline app::TextStyle__Class** type_info() {
            static app::TextStyle__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextStyle__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextStyle__Class* get_class() {
            return il2cpp::get_class<app::TextStyle__Class>(type_info(), "CatlikeCoding.TextBox", "TextStyle");
        }
        inline app::TextStyle* create() {
            return il2cpp::create_object<app::TextStyle>(get_class());
        }
        inline app::TextStyle__Array* create_array(int size) {
            return il2cpp::array_new<app::TextStyle__Array>(get_class(), size);
        }
        inline app::TextStyle__Array* create_array(const std::vector<app::TextStyle*>& items) {
            return il2cpp::array_new<app::TextStyle__Array>(get_class(), items);
        }
    } // namespace TextStyle
} // namespace app::classes::types
