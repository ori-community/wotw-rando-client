#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAOAEPKeyExchangeDeformatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAOAEPKeyExchangeDeformatter__Class** type_info;
        inline app::RSAOAEPKeyExchangeDeformatter__Class* get_class() {
            return il2cpp::get_class<app::RSAOAEPKeyExchangeDeformatter__Class>(type_info, "System.Security.Cryptography", "RSAOAEPKeyExchangeDeformatter");
        }
        inline app::RSAOAEPKeyExchangeDeformatter* create() {
            return il2cpp::create_object<app::RSAOAEPKeyExchangeDeformatter>(get_class());
        }
    } // namespace RSAOAEPKeyExchangeDeformatter
} // namespace app::classes::types
