#pragma once
#include <Modloader/app/structs/AesCryptoServiceProvider.h>
#include <Modloader/app/structs/AesCryptoServiceProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AesCryptoServiceProvider {
        inline app::AesCryptoServiceProvider__Class** type_info() {
            static app::AesCryptoServiceProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AesCryptoServiceProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AesCryptoServiceProvider__Class* get_class() {
            return il2cpp::get_class<app::AesCryptoServiceProvider__Class>(type_info(), "System.Security.Cryptography", "AesCryptoServiceProvider");
        }
        inline app::AesCryptoServiceProvider* create() {
            return il2cpp::create_object<app::AesCryptoServiceProvider>(get_class());
        }
    } // namespace AesCryptoServiceProvider
} // namespace app::classes::types
