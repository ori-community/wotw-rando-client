#pragma once
#include <Modloader/app/structs/PKCS7.h>
#include <Modloader/app/structs/PKCS7__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS7 {
        inline app::PKCS7__Class** type_info() {
            static app::PKCS7__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PKCS7__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PKCS7__Class* get_class() {
            return il2cpp::get_class<app::PKCS7__Class>(type_info(), "Mono.Security", "PKCS7");
        }
        inline app::PKCS7* create() {
            return il2cpp::create_object<app::PKCS7>(get_class());
        }
    } // namespace PKCS7
} // namespace app::classes::types
