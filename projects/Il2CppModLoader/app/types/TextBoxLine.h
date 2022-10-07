#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TextBoxLine {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TextBoxLine__Class** type_info;
        inline app::TextBoxLine__Class* get_class() {
            return il2cpp::get_class<app::TextBoxLine__Class>(type_info, "CatlikeCoding.TextBox", "TextBoxLine");
        }
        inline app::TextBoxLine* create() {
            return il2cpp::create_object<app::TextBoxLine>(get_class());
        }
        inline app::TextBoxLine__Boxed* box(app::TextBoxLine value) {
            return il2cpp::box_value<app::TextBoxLine__Boxed>(get_class(), value);
        }
        inline app::TextBoxLine__Array* create_array(int size) {
            return il2cpp::array_new<app::TextBoxLine__Array>(get_class(), size);
        }
        inline app::TextBoxLine__Array* create_array(const std::vector<app::TextBoxLine>& items) {
            return il2cpp::array_new<app::TextBoxLine__Array>(get_class(), items);
        }
    } // namespace TextBoxLine
} // namespace app::classes::types
