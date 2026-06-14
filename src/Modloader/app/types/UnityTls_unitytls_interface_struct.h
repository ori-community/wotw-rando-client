#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct.h>
#include <Modloader/app/structs/UnityTls_unitytls_interface_struct__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_interface_struct {
        inline app::UnityTls_unitytls_interface_struct__Class** type_info() {
            static app::UnityTls_unitytls_interface_struct__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_interface_struct__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_interface_struct__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_interface_struct__Class>(type_info(), "Mono.Unity", "UnityTls", "unitytls_interface_struct");
        }
        inline app::UnityTls_unitytls_interface_struct* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_interface_struct>(get_class());
        }
    } // namespace UnityTls_unitytls_interface_struct
} // namespace app::classes::types
