#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509Chain {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509Chain__Class** type_info;
        inline app::X509Chain__Class* get_class() {
            return il2cpp::get_class<app::X509Chain__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509Chain");
        }
        inline app::X509Chain* create() {
            return il2cpp::create_object<app::X509Chain>(get_class());
        }
    } // namespace X509Chain
} // namespace app::classes::types
