#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBox {
        namespace {
            app::TextBox__Class* type_info_ref = nullptr;
        }
        app::TextBox__Class** type_info = &type_info_ref;
        inline app::TextBox__Class* get_class() {
            return il2cpp::get_class<app::TextBox__Class>(type_info, "CatlikeCoding.TextBox", "TextBox");
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
