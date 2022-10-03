#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAOAEPKeyExchangeFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAOAEPKeyExchangeFormatter__Class** type_info;
        inline app::RSAOAEPKeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAOAEPKeyExchangeFormatter__Class>(type_info, "System.Security.Cryptography", "RSAOAEPKeyExchangeFormatter");
        }
        inline app::RSAOAEPKeyExchangeFormatter* create() {
            return il2cpp::create_object<app::RSAOAEPKeyExchangeFormatter>(get_class());
        }
    } // namespace RSAOAEPKeyExchangeFormatter
} // namespace app::classes::types
