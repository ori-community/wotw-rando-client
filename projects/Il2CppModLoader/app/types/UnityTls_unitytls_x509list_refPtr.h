#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_x509list_refPtr {
        namespace {
            inline app::UnityTls_unitytls_x509list_refPtr__Class* type_info_ref = nullptr;
        }
        inline app::UnityTls_unitytls_x509list_refPtr__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_x509list_refPtr__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_x509list_refPtr__Class>(type_info, "Mono.Unity", "UnityTls+unitytls_x509list_ref*");
        }
        inline app::UnityTls_unitytls_x509list_refPtr* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_x509list_refPtr>(get_class());
        }
    } // namespace UnityTls_unitytls_x509list_refPtr
} // namespace app::classes::types
