#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509verify_result__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityTls_unitytls_x509verify_result__Enum__Class** type_info;
        inline app::UnityTls_unitytls_x509verify_result__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_x509verify_result__Enum__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_x509verify_result");
        }
        inline app::UnityTls_unitytls_x509verify_result__Enum* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509verify_result__Enum>(get_class());
        }
    } // namespace UnityTls_unitytls_x509verify_result__Enum
} // namespace app::classes::types
