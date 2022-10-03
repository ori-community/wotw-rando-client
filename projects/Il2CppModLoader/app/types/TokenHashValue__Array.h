#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TokenHashValue__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TokenHashValue__Array__Class** type_info;
        inline app::TokenHashValue__Array__Class* get_class() {
            return il2cpp::get_class<app::TokenHashValue__Array__Class>(type_info, "System.Globalization", "TokenHashValue[]");
        }
        inline app::TokenHashValue__Array* create() {
            return il2cpp::create_object<app::TokenHashValue__Array>(get_class());
        }
    } // namespace TokenHashValue__Array
} // namespace app::classes::types
