#pragma once
#include <Modloader/app/structs/PKCS8.h>
#include <Modloader/app/structs/PKCS8__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS8 {
        inline app::PKCS8__Class** type_info() {
            static app::PKCS8__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PKCS8__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PKCS8__Class* get_class() {
            return il2cpp::get_class<app::PKCS8__Class>(type_info(), "Mono.Security.Cryptography", "PKCS8");
        }
        inline app::PKCS8* create() {
            return il2cpp::create_object<app::PKCS8>(get_class());
        }
    } // namespace PKCS8
} // namespace app::classes::types
