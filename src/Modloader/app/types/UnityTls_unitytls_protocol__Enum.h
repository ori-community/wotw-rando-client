#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_protocol__Enum.h>
#include <Modloader/app/structs/UnityTls_unitytls_protocol__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_protocol__Enum {
        inline app::UnityTls_unitytls_protocol__Enum__Class** type_info() {
            static app::UnityTls_unitytls_protocol__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_protocol__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_protocol__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_protocol__Enum__Class>(type_info(), "Mono.Unity", "UnityTls", "unitytls_protocol");
        }
        inline app::UnityTls_unitytls_protocol__Enum* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_protocol__Enum>(get_class());
        }
    } // namespace UnityTls_unitytls_protocol__Enum
} // namespace app::classes::types
