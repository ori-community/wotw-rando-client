#pragma once
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo.h>
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS8_EncryptedPrivateKeyInfo {
        inline app::PKCS8_EncryptedPrivateKeyInfo__Class** type_info() {
            static app::PKCS8_EncryptedPrivateKeyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS8_EncryptedPrivateKeyInfo__Class**)(modloader::win::memory::resolve_rva(0x04794488));
            }
            return cache;
        }
        inline app::PKCS8_EncryptedPrivateKeyInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS8_EncryptedPrivateKeyInfo__Class>(type_info(), "Mono.Security.Cryptography", "PKCS8", "EncryptedPrivateKeyInfo");
        }
        inline app::PKCS8_EncryptedPrivateKeyInfo* create() {
            return il2cpp::create_object<app::PKCS8_EncryptedPrivateKeyInfo>(get_class());
        }
    } // namespace PKCS8_EncryptedPrivateKeyInfo
} // namespace app::classes::types
