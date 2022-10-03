#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Token {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Token__Class** type_info;
        inline app::Token__Class* get_class() {
            return il2cpp::get_class<app::Token__Class>(type_info, "System.Net.Http.Headers", "Token");
        }
        inline app::Token* create() {
            return il2cpp::create_object<app::Token>(get_class());
        }
        inline app::Token__Boxed* box(app::Token value) {
            return il2cpp::box_value<app::Token__Boxed>(get_class(), value);
        }
    } // namespace Token
} // namespace app::classes::types
