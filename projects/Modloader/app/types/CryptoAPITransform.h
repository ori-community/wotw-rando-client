#pragma once
#include <Modloader/app/structs/CryptoAPITransform.h>
#include <Modloader/app/structs/CryptoAPITransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CryptoAPITransform {
        inline app::CryptoAPITransform__Class** type_info() {
            static app::CryptoAPITransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CryptoAPITransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CryptoAPITransform__Class* get_class() {
            return il2cpp::get_class<app::CryptoAPITransform__Class>(type_info(), "System.Security.Cryptography", "CryptoAPITransform");
        }
        inline app::CryptoAPITransform* create() {
            return il2cpp::create_object<app::CryptoAPITransform>(get_class());
        }
    } // namespace CryptoAPITransform
} // namespace app::classes::types
