#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_keyPtr.h>
#include <Modloader/app/structs/UnityTls_unitytls_keyPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_keyPtr {
        inline app::UnityTls_unitytls_keyPtr__Class** type_info() {
            static app::UnityTls_unitytls_keyPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_keyPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_keyPtr__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_keyPtr__Class>(type_info(), "Mono.Unity", "UnityTls+unitytls_key*");
        }
        inline app::UnityTls_unitytls_keyPtr* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_keyPtr>(get_class());
        }
    } // namespace UnityTls_unitytls_keyPtr
} // namespace app::classes::types
