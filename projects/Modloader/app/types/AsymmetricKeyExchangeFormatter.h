#pragma once
#include <Modloader/app/structs/AsymmetricKeyExchangeFormatter.h>
#include <Modloader/app/structs/AsymmetricKeyExchangeFormatter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AsymmetricKeyExchangeFormatter {
        inline app::AsymmetricKeyExchangeFormatter__Class** type_info() {
            static app::AsymmetricKeyExchangeFormatter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AsymmetricKeyExchangeFormatter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AsymmetricKeyExchangeFormatter__Class* get_class() {
            return il2cpp::get_class<app::AsymmetricKeyExchangeFormatter__Class>(type_info(), "System.Security.Cryptography", "AsymmetricKeyExchangeFormatter");
        }
        inline app::AsymmetricKeyExchangeFormatter* create() {
            return il2cpp::create_object<app::AsymmetricKeyExchangeFormatter>(get_class());
        }
    } // namespace AsymmetricKeyExchangeFormatter
} // namespace app::classes::types
