#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TokenType__Enum {
        namespace {
            app::TokenType__Enum__Class* type_info_ref = nullptr;
        }
        app::TokenType__Enum__Class** type_info = &type_info_ref;
        inline app::TokenType__Enum__Class* get_class() {
            return il2cpp::get_class<app::TokenType__Enum__Class>(type_info, "System", "TokenType");
        }
        inline app::TokenType__Enum* create() {
            return il2cpp::create_object<app::TokenType__Enum>(get_class());
        }
    } // namespace TokenType__Enum
} // namespace app::classes::types
