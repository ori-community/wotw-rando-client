#pragma once
#include <Modloader/app/structs/TextBox.h>
#include <Modloader/app/structs/TextBox__Array.h>
#include <Modloader/app/structs/TextBox__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBox {
        inline app::TextBox__Class** type_info() {
            static app::TextBox__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextBox__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextBox__Class* get_class() {
            return il2cpp::get_class<app::TextBox__Class>(type_info(), "CatlikeCoding.TextBox", "TextBox");
        }
        inline app::TextBox* create() {
            return il2cpp::create_object<app::TextBox>(get_class());
        }
        inline app::TextBox__Array* create_array(int size) {
            return il2cpp::array_new<app::TextBox__Array>(get_class(), size);
        }
        inline app::TextBox__Array* create_array(const std::vector<app::TextBox*>& items) {
            return il2cpp::array_new<app::TextBox__Array>(get_class(), items);
        }
    } // namespace TextBox
} // namespace app::classes::types
