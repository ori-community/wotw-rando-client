#pragma once
#include <Modloader/app/structs/CryptoKeySecurity.h>
#include <Modloader/app/structs/CryptoKeySecurity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CryptoKeySecurity {
        inline app::CryptoKeySecurity__Class** type_info() {
            static app::CryptoKeySecurity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CryptoKeySecurity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CryptoKeySecurity__Class* get_class() {
            return il2cpp::get_class<app::CryptoKeySecurity__Class>(type_info(), "System.Security.AccessControl", "CryptoKeySecurity");
        }
        inline app::CryptoKeySecurity* create() {
            return il2cpp::create_object<app::CryptoKeySecurity>(get_class());
        }
    } // namespace CryptoKeySecurity
} // namespace app::classes::types
