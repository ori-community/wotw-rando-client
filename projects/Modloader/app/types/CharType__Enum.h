#pragma once
#include <Modloader/app/structs/CharType__Enum.h>
#include <Modloader/app/structs/CharType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CharType__Enum {
        inline app::CharType__Enum__Class** type_info() {
            static app::CharType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CharType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CharType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CharType__Enum__Class>(type_info(), "CatlikeCoding.TextBox", "CharType");
        }
        inline app::CharType__Enum* create() {
            return il2cpp::create_object<app::CharType__Enum>(get_class());
        }
    } // namespace CharType__Enum
} // namespace app::classes::types
