#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PKCS8 {
        namespace {
            app::PKCS8__Class* type_info_ref = nullptr;
        }
        app::PKCS8__Class** type_info = &type_info_ref;
        inline app::PKCS8__Class* get_class() {
            return il2cpp::get_class<app::PKCS8__Class>(type_info, "Mono.Security.Cryptography", "PKCS8");
        }
        inline app::PKCS8* create() {
            return il2cpp::create_object<app::PKCS8>(get_class());
        }
    } // namespace PKCS8
} // namespace app::classes::types
