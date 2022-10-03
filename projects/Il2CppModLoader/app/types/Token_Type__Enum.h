#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Token_Type__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Token_Type__Enum__Class** type_info;
        inline app::Token_Type__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Token_Type__Enum__Class>(type_info, "System.Net.Http.Headers", "Token", "Type");
        }
        inline app::Token_Type__Enum* create() {
            return il2cpp::create_object<app::Token_Type__Enum>(get_class());
        }
    } // namespace Token_Type__Enum
} // namespace app::classes::types
