#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PKCS7 {
        namespace {
            inline app::PKCS7__Class* type_info_ref = nullptr;
        }
        inline app::PKCS7__Class** type_info = &type_info_ref;
        inline app::PKCS7__Class* get_class() {
            return il2cpp::get_class<app::PKCS7__Class>(type_info, "Mono.Security", "PKCS7");
        }
        inline app::PKCS7* create() {
            return il2cpp::create_object<app::PKCS7>(get_class());
        }
    } // namespace PKCS7
} // namespace app::classes::types
