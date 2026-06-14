#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_key_ref.h>
#include <Modloader/app/structs/UnityTls_unitytls_key_ref__Boxed.h>
#include <Modloader/app/structs/UnityTls_unitytls_key_ref__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_key_ref {
        inline app::UnityTls_unitytls_key_ref__Class** type_info() {
            static app::UnityTls_unitytls_key_ref__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_key_ref__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_key_ref__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_key_ref__Class>(type_info(), "Mono.Unity", "UnityTls", "unitytls_key_ref");
        }
        inline app::UnityTls_unitytls_key_ref* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_key_ref>(get_class());
        }
        inline app::UnityTls_unitytls_key_ref__Boxed* box(app::UnityTls_unitytls_key_ref value) {
            return il2cpp::box_value<app::UnityTls_unitytls_key_ref__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_key_ref
} // namespace app::classes::types
