#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_key {
        namespace {
            inline app::UnityTls_unitytls_key__Class* type_info_ref = nullptr;
        }
        inline app::UnityTls_unitytls_key__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_key__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_key__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_key");
        }
        inline app::UnityTls_unitytls_key* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_key>(get_class());
        }
        inline app::UnityTls_unitytls_key__Boxed* box(app::UnityTls_unitytls_key value) {
            return il2cpp::box_value<app::UnityTls_unitytls_key__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_key
} // namespace app::classes::types
