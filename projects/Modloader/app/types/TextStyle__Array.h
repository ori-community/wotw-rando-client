#pragma once
#include <Modloader/app/structs/TextStyle__Array.h>
#include <Modloader/app/structs/TextStyle__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TextStyle__Array {
        inline app::TextStyle__Array__Class** type_info() {
            static app::TextStyle__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TextStyle__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TextStyle__Array__Class* get_class() {
            return il2cpp::get_class<app::TextStyle__Array__Class>(type_info(), "CatlikeCoding.TextBox", "TextStyle[]");
        }
        inline app::TextStyle__Array* create() {
            return il2cpp::create_object<app::TextStyle__Array>(get_class());
        }
    } // namespace TextStyle__Array
} // namespace app::classes::types
