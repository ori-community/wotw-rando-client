#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AuthenticationHeaderValue {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AuthenticationHeaderValue__Class** type_info;
        inline app::AuthenticationHeaderValue__Class* get_class() {
            return il2cpp::get_class<app::AuthenticationHeaderValue__Class>(type_info, "System.Net.Http.Headers", "AuthenticationHeaderValue");
        }
        inline app::AuthenticationHeaderValue* create() {
            return il2cpp::create_object<app::AuthenticationHeaderValue>(get_class());
        }
        inline app::AuthenticationHeaderValue__Array* create_array(int size) {
            return il2cpp::array_new<app::AuthenticationHeaderValue__Array>(get_class(), size);
        }
    } // namespace AuthenticationHeaderValue
} // namespace app::classes::types
