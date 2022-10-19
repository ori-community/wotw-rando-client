#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsymmetricKeyExchangeDeformatter {
        namespace {
            inline app::AsymmetricKeyExchangeDeformatter__Class* type_info_ref = nullptr;
        }
        inline app::AsymmetricKeyExchangeDeformatter__Class** type_info = &type_info_ref;
        inline app::AsymmetricKeyExchangeDeformatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricKeyExchangeDeformatter__Class>(type_info, "System.Security.Cryptography", "AsymmetricKeyExchangeDeformatter");
        }
        inline app::AsymmetricKeyExchangeDeformatter* create() {
            return il2cpp::create_object<app::AsymmetricKeyExchangeDeformatter>(get_class());
        }
    } // namespace AsymmetricKeyExchangeDeformatter
} // namespace app::classes::types
