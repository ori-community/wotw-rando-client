#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_tlsctxPtr.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctxPtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_tlsctxPtr {
        inline app::UnityTls_unitytls_tlsctxPtr__Class** type_info() {
            static app::UnityTls_unitytls_tlsctxPtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_tlsctxPtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_tlsctxPtr__Class* get_class() {
            return il2cpp::get_class<app::UnityTls_unitytls_tlsctxPtr__Class>(type_info(), "Mono.Unity", "UnityTls+unitytls_tlsctx*");
        }
        inline app::UnityTls_unitytls_tlsctxPtr* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_tlsctxPtr>(get_class());
        }
    } // namespace UnityTls_unitytls_tlsctxPtr
} // namespace app::classes::types
