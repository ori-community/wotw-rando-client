#pragma once
#include <Modloader/app/structs/TextStyle_1.h>
#include <Modloader/app/structs/TextStyle_1__Array.h>
#include <Modloader/app/structs/TextStyle_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextStyle_1 {
        inline app::TextStyle_1__Class** type_info() {
            static app::TextStyle_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextStyle_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextStyle_1__Class* get_class() {
            return il2cpp::get_class<app::TextStyle_1__Class>(type_info(), "Moon.UI", "TextStyle");
        }
        inline app::TextStyle_1* create() {
            return il2cpp::create_object<app::TextStyle_1>(get_class());
        }
        inline app::TextStyle_1__Array* create_array(int size) {
            return il2cpp::array_new<app::TextStyle_1__Array>(get_class(), size);
        }
        inline app::TextStyle_1__Array* create_array(const std::vector<app::TextStyle_1*>& items) {
            return il2cpp::array_new<app::TextStyle_1__Array>(get_class(), items);
        }
    } // namespace TextStyle_1
} // namespace app::classes::types
