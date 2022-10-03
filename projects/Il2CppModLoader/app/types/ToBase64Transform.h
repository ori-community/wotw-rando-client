#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ToBase64Transform {
        namespace {
            app::ToBase64Transform__Class* type_info_ref = nullptr;
        }
        app::ToBase64Transform__Class** type_info = &type_info_ref;
        inline app::ToBase64Transform__Class* get_class() {
            return il2cpp::get_class<app::ToBase64Transform__Class>(type_info, "System.Security.Cryptography", "ToBase64Transform");
        }
        inline app::ToBase64Transform* create() {
            return il2cpp::create_object<app::ToBase64Transform>(get_class());
        }
    } // namespace ToBase64Transform
} // namespace app::classes::types
