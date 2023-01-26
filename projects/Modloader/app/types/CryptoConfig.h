#pragma once
#include <Modloader/app/structs/CryptoConfig.h>
#include <Modloader/app/structs/CryptoConfig__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CryptoConfig {
        inline app::CryptoConfig__Class** type_info() {
            static app::CryptoConfig__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CryptoConfig__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CryptoConfig__Class* get_class() {
            return il2cpp::get_class<app::CryptoConfig__Class>(type_info(), "System.Security.Cryptography", "CryptoConfig");
        }
        inline app::CryptoConfig* create() {
            return il2cpp::create_object<app::CryptoConfig>(get_class());
        }
    } // namespace CryptoConfig
} // namespace app::classes::types
