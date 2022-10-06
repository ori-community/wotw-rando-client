#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClaimsIdentity {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClaimsIdentity__Class** type_info;
        inline app::ClaimsIdentity__Class* get_class() {
            return il2cpp::get_class<app::ClaimsIdentity__Class>(type_info, "System.Security.Claims", "ClaimsIdentity");
        }
        inline app::ClaimsIdentity* create() {
            return il2cpp::create_object<app::ClaimsIdentity>(get_class());
        }
        inline app::ClaimsIdentity__Array* create_array(int size) {
            return il2cpp::array_new<app::ClaimsIdentity__Array>(get_class(), size);
        }
        inline app::ClaimsIdentity__Array* create_array(const std::vector<app::ClaimsIdentity*>& items) {
            return il2cpp::array_new<app::ClaimsIdentity__Array>(get_class(), items);
        }
    } // namespace ClaimsIdentity
} // namespace app::classes::types
