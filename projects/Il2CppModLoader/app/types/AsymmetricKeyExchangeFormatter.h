#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AsymmetricKeyExchangeFormatter {
        namespace {
            inline app::AsymmetricKeyExchangeFormatter__Class* type_info_ref = nullptr;
        }
        inline app::AsymmetricKeyExchangeFormatter__Class** type_info = &type_info_ref;
        inline app::AsymmetricKeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricKeyExchangeFormatter__Class>(type_info, "System.Security.Cryptography", "AsymmetricKeyExchangeFormatter");
        }
        inline app::AsymmetricKeyExchangeFormatter* create() {
            return il2cpp::create_object<app::AsymmetricKeyExchangeFormatter>(get_class());
        }
    } // namespace AsymmetricKeyExchangeFormatter
} // namespace app::classes::types
