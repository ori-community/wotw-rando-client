#pragma once
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo.h>
#include <Modloader/app/structs/PKCS8_PrivateKeyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS8_PrivateKeyInfo {
        inline app::PKCS8_PrivateKeyInfo__Class** type_info() {
            static app::PKCS8_PrivateKeyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PKCS8_PrivateKeyInfo__Class**)(modloader::win::memory::resolve_rva(0x0474AA30));
            }
            return cache;
        }
        inline app::PKCS8_PrivateKeyInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::PKCS8_PrivateKeyInfo__Class>(type_info(), "Mono.Security.Cryptography", "PKCS8", "PrivateKeyInfo");
        }
        inline app::PKCS8_PrivateKeyInfo* create() {
            return il2cpp::create_object<app::PKCS8_PrivateKeyInfo>(get_class());
        }
    } // namespace PKCS8_PrivateKeyInfo
} // namespace app::classes::types
