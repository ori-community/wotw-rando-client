#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace X509ChainPolicy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::X509ChainPolicy__Class** type_info;
        inline app::X509ChainPolicy__Class* get_class() {
            return il2cpp::get_class<app::X509ChainPolicy__Class>(type_info, "System.Security.Cryptography.X509Certificates", "X509ChainPolicy");
        }
        inline app::X509ChainPolicy* create() {
            return il2cpp::create_object<app::X509ChainPolicy>(get_class());
        }
    } // namespace X509ChainPolicy
} // namespace app::classes::types
