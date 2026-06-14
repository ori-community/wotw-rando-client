#pragma once
#include <Modloader/app/structs/CryptoConvert.h>
#include <Modloader/app/structs/CryptoConvert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CryptoConvert {
        inline app::CryptoConvert__Class** type_info() {
            static app::CryptoConvert__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CryptoConvert__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CryptoConvert__Class* get_class() {
            return il2cpp::get_class<app::CryptoConvert__Class>(type_info(), "Mono.Security.Cryptography", "CryptoConvert");
        }
        inline app::CryptoConvert* create() {
            return il2cpp::create_object<app::CryptoConvert>(get_class());
        }
    } // namespace CryptoConvert
} // namespace app::classes::types
