#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CryptoConfig {
        namespace {
            app::CryptoConfig__Class* type_info_ref = nullptr;
        }
        app::CryptoConfig__Class** type_info = &type_info_ref;
        inline app::CryptoConfig__Class* get_class() {
            return il2cpp::get_class<app::CryptoConfig__Class>(type_info, "System.Security.Cryptography", "CryptoConfig");
        }
        inline app::CryptoConfig* create() {
            return il2cpp::create_object<app::CryptoConfig>(get_class());
        }
    } // namespace CryptoConfig
} // namespace app::classes::types
