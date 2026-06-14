#pragma once
#include <Modloader/app/structs/PKCS9.h>
#include <Modloader/app/structs/PKCS9__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS9 {
        inline app::PKCS9__Class** type_info() {
            static app::PKCS9__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PKCS9__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PKCS9__Class* get_class() {
            return il2cpp::get_class<app::PKCS9__Class>(type_info(), "Mono.Security.X509", "PKCS9");
        }
        inline app::PKCS9* create() {
            return il2cpp::create_object<app::PKCS9>(get_class());
        }
    } // namespace PKCS9
} // namespace app::classes::types
