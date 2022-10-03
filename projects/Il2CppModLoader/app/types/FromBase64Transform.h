#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FromBase64Transform {
        namespace {
            app::FromBase64Transform__Class* type_info_ref = nullptr;
        }
        app::FromBase64Transform__Class** type_info = &type_info_ref;
        inline app::FromBase64Transform__Class* get_class() {
            return il2cpp::get_class<app::FromBase64Transform__Class>(type_info, "System.Security.Cryptography", "FromBase64Transform");
        }
        inline app::FromBase64Transform* create() {
            return il2cpp::create_object<app::FromBase64Transform>(get_class());
        }
    } // namespace FromBase64Transform
} // namespace app::classes::types
