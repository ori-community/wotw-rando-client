#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CharType__Enum {
        namespace {
            inline app::CharType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CharType__Enum__Class** type_info = &type_info_ref;
        inline app::CharType__Enum__Class* get_class() {
            return il2cpp::get_class<app::CharType__Enum__Class>(type_info, "CatlikeCoding.TextBox", "CharType");
        }
        inline app::CharType__Enum* create() {
            return il2cpp::create_object<app::CharType__Enum>(get_class());
        }
    } // namespace CharType__Enum
} // namespace app::classes::types
