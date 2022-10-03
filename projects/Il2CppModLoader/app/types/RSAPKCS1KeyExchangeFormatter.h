#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RSAPKCS1KeyExchangeFormatter {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RSAPKCS1KeyExchangeFormatter__Class** type_info;
        inline app::RSAPKCS1KeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::RSAPKCS1KeyExchangeFormatter__Class>(type_info, "System.Security.Cryptography", "RSAPKCS1KeyExchangeFormatter");
        }
        inline app::RSAPKCS1KeyExchangeFormatter* create() {
            return il2cpp::create_object<app::RSAPKCS1KeyExchangeFormatter>(get_class());
        }
    } // namespace RSAPKCS1KeyExchangeFormatter
} // namespace app::classes::types
