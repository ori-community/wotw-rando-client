#pragma once
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo_1.h>
#include <Modloader/app/structs/PKCS8_EncryptedPrivateKeyInfo_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS8_EncryptedPrivateKeyInfo_1 {
        inline app::PKCS8_EncryptedPrivateKeyInfo_1__Class** type_info() {
            static app::PKCS8_EncryptedPrivateKeyInfo_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS8_EncryptedPrivateKeyInfo_1__Class**)(modloader::win::memory::resolve_rva(0x0475D8D0));
            }
            return cache;
        }
        inline app::PKCS8_EncryptedPrivateKeyInfo_1__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS8_EncryptedPrivateKeyInfo_1__Class>(type_info(), "Mono.Security.Cryptography", "PKCS8", "EncryptedPrivateKeyInfo");
        }
        inline app::PKCS8_EncryptedPrivateKeyInfo_1* create() {
            return il2cpp::create_object<app::PKCS8_EncryptedPrivateKeyInfo_1>(get_class());
        }
    } // namespace PKCS8_EncryptedPrivateKeyInfo_1
} // namespace app::classes::types
