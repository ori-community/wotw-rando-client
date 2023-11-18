#pragma once
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData_1.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData_1__Array.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxIconsFontGenerator_IconData_1 {
        inline app::TextBoxIconsFontGenerator_IconData_1__Class** type_info() {
            static app::TextBoxIconsFontGenerator_IconData_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextBoxIconsFontGenerator_IconData_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextBoxIconsFontGenerator_IconData_1__Class* get_class() {
            return il2cpp::get_nested_class<app::TextBoxIconsFontGenerator_IconData_1__Class>(type_info(), "Moon.UI", "TextBoxIconsFontGenerator", "IconData");
        }
        inline app::TextBoxIconsFontGenerator_IconData_1* create() {
            return il2cpp::create_object<app::TextBoxIconsFontGenerator_IconData_1>(get_class());
        }
        inline app::TextBoxIconsFontGenerator_IconData_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TextBoxIconsFontGenerator_IconData_1__Array>(get_class(), size);
        }
        inline app::TextBoxIconsFontGenerator_IconData_1__Array* create_array(const std::vector<app::TextBoxIconsFontGenerator_IconData_1*>& items) {
            return il2cpp::array_new<app::TextBoxIconsFontGenerator_IconData_1__Array>(get_class(), items);
        }
    } // namespace TextBoxIconsFontGenerator_IconData_1
} // namespace app::classes::types
