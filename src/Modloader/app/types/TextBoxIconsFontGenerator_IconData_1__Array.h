#pragma once
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData_1__Array.h>
#include <Modloader/app/structs/TextBoxIconsFontGenerator_IconData_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxIconsFontGenerator_IconData_1__Array {
        inline app::TextBoxIconsFontGenerator_IconData_1__Array__Class** type_info() {
            static app::TextBoxIconsFontGenerator_IconData_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextBoxIconsFontGenerator_IconData_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextBoxIconsFontGenerator_IconData_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TextBoxIconsFontGenerator_IconData_1__Array__Class>(type_info(), "Moon.UI", "TextBoxIconsFontGenerator+IconData[]");
        }
        inline app::TextBoxIconsFontGenerator_IconData_1__Array* create() {
            return il2cpp::create_object<app::TextBoxIconsFontGenerator_IconData_1__Array>(get_class());
        }
    } // namespace TextBoxIconsFontGenerator_IconData_1__Array
} // namespace app::classes::types
