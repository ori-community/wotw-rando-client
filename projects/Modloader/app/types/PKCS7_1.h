#pragma once
#include <Modloader/app/structs/PKCS7_1.h>
#include <Modloader/app/structs/PKCS7_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PKCS7_1 {
        inline app::PKCS7_1__Class** type_info() {
            static app::PKCS7_1__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PKCS7_1__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PKCS7_1__Class* get_class() {
            return il2cpp::get_class<app::PKCS7_1__Class>(type_info(), "Mono.Security", "PKCS7");
        }
        inline app::PKCS7_1* create() {
            return il2cpp::create_object<app::PKCS7_1>(get_class());
        }
    } // namespace PKCS7_1
} // namespace app::classes::types
