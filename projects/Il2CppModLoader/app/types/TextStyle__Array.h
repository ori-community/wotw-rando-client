#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TextStyle__Array {
        namespace {
            inline app::TextStyle__Array__Class* type_info_ref = nullptr;
        }
        inline app::TextStyle__Array__Class** type_info = &type_info_ref;
        inline app::TextStyle__Array__Class* get_class() {
            return il2cpp::get_class<app::TextStyle__Array__Class>(type_info, "CatlikeCoding.TextBox", "TextStyle[]");
        }
        inline app::TextStyle__Array* create() {
            return il2cpp::create_object<app::TextStyle__Array>(get_class());
        }
    } // namespace TextStyle__Array
} // namespace app::classes::types
