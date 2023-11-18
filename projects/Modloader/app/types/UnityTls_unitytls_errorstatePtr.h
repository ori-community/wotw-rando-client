#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_errorstatePtr.h>
#include <Modloader/app/structs/UnityTls_unitytls_errorstatePtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_errorstatePtr {
        inline app::UnityTls_unitytls_errorstatePtr__Class** type_info() {
            static app::UnityTls_unitytls_errorstatePtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_errorstatePtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_errorstatePtr__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_errorstatePtr__Class>(type_info(), "Mono.Unity", "UnityTls+unitytls_errorstate*");
        }
        inline app::UnityTls_unitytls_errorstatePtr* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_errorstatePtr>(get_class());
        }
    } // namespace UnityTls_unitytls_errorstatePtr
} // namespace app::classes::types
