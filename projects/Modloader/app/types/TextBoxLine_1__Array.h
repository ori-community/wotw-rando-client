#pragma once
#include <Modloader/app/structs/TextBoxLine_1__Array.h>
#include <Modloader/app/structs/TextBoxLine_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextBoxLine_1__Array {
        inline app::TextBoxLine_1__Array__Class** type_info() {
            static app::TextBoxLine_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextBoxLine_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextBoxLine_1__Array__Class* get_class() {
            return il2cpp::get_class<app::TextBoxLine_1__Array__Class>(type_info(), "Moon.UI", "TextBoxLine[]");
        }
        inline app::TextBoxLine_1__Array* create() {
            return il2cpp::create_object<app::TextBoxLine_1__Array>(get_class());
        }
    } // namespace TextBoxLine_1__Array
} // namespace app::classes::types
