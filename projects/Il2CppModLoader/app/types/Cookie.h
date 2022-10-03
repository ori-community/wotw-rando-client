#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Cookie {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Cookie__Class** type_info;
        inline app::Cookie__Class* get_class() {
            return il2cpp::get_class<app::Cookie__Class>(type_info, "System.Net", "Cookie");
        }
        inline app::Cookie* create() {
            return il2cpp::create_object<app::Cookie>(get_class());
        }
        inline app::Cookie__Array* create_array(int size) {
            return il2cpp::array_new<app::Cookie__Array>(get_class(), size);
        }
    } // namespace Cookie
} // namespace app::classes::types
