#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTls_unitytls_keyPtr__Class.h>
#include <Modloader/app/structs/UnityTls_unitytls_keyPtr.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_keyPtr {
        namespace {
            inline app::UnityTls_unitytls_keyPtr__Class* type_info_ref = nullptr;
        }
        inline app::UnityTls_unitytls_keyPtr__Class** type_info = &type_info_ref;
        inline app::UnityTls_unitytls_keyPtr__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_keyPtr__Class>(type_info, "Mono.Unity", "UnityTls+unitytls_key*");
        }
        inline app::UnityTls_unitytls_keyPtr* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_keyPtr>(get_class());
        }
    } // namespace UnityTls_unitytls_keyPtr
} // namespace app::classes::types
