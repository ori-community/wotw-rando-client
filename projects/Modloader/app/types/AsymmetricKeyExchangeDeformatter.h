#pragma once
#include <Modloader/app/structs/AsymmetricKeyExchangeDeformatter.h>
#include <Modloader/app/structs/AsymmetricKeyExchangeDeformatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymmetricKeyExchangeDeformatter {
        inline app::AsymmetricKeyExchangeDeformatter__Class** type_info() {
            static app::AsymmetricKeyExchangeDeformatter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsymmetricKeyExchangeDeformatter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsymmetricKeyExchangeDeformatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricKeyExchangeDeformatter__Class>(type_info(), "System.Security.Cryptography", "AsymmetricKeyExchangeDeformatter");
        }
        inline app::AsymmetricKeyExchangeDeformatter* create() {
            return il2cpp::create_object<app::AsymmetricKeyExchangeDeformatter>(get_class());
        }
    } // namespace AsymmetricKeyExchangeDeformatter
} // namespace app::classes::types
