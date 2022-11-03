#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_protocol__Enum {
        namespace {
            inline app::UnityTls_unitytls_protocol__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UnityTls_unitytls_protocol__Enum__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_protocol__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_protocol__Enum__Class>(type_info, "Mono.Unity", "UnityTls", "unitytls_protocol");
        }
        inline app::UnityTls_unitytls_protocol__Enum* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_protocol__Enum>(get_class());
        }
    } // namespace UnityTls_unitytls_protocol__Enum
} // namespace app::classes::types
