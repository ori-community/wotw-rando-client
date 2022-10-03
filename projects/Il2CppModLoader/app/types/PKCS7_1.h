#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS7_1 {
        namespace {
            app::PKCS7_1__Class* type_info_ref = nullptr;
        }
        app::PKCS7_1__Class** type_info = &type_info_ref;
        inline app::PKCS7_1__Class* get_class() {
            return il2cpp::get_class<app::PKCS7_1__Class>(type_info, "Mono.Security", "PKCS7");
        }
        inline app::PKCS7_1* create() {
            return il2cpp::create_object<app::PKCS7_1>(get_class());
        }
    } // namespace PKCS7_1
} // namespace app::classes::types
