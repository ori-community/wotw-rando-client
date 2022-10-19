#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_ciphersuite__Enum {
        namespace {
            inline app::UnityTls_unitytls_ciphersuite__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnityTls_unitytls_ciphersuite__Enum__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_ciphersuite__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_ciphersuite__Enum__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_ciphersuite");
        }
        inline app::UnityTls_unitytls_ciphersuite__Enum* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_ciphersuite__Enum>(get_class());
        }
        inline app::UnityTls_unitytls_ciphersuite__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::UnityTls_unitytls_ciphersuite__Enum__Array>(get_class(), size);
        }
        inline app::UnityTls_unitytls_ciphersuite__Enum__Array* create_array(const std::vector<app::UnityTls_unitytls_ciphersuite__Enum*>& items) {
            return il2cpp::array_new<app::UnityTls_unitytls_ciphersuite__Enum__Array>(get_class(), items);
        }
    } // namespace UnityTls_unitytls_ciphersuite__Enum
} // namespace app::classes::types
