#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Helper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Helper__Class** type_info;
        inline app::X509Helper__Class* get_class() {
            return il2cpp::get_class<app::X509Helper__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Helper");
        }
        inline app::X509Helper* create() {
            return il2cpp::create_object<app::X509Helper>(get_class());
        }
    } // namespace X509Helper
} // namespace app::classes::types
