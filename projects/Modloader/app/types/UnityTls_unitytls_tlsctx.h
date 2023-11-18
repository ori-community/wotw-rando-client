#pragma once
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx__Boxed.h>
#include <Modloader/app/structs/UnityTls_unitytls_tlsctx__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTls_unitytls_tlsctx {
        inline app::UnityTls_unitytls_tlsctx__Class** type_info() {
            static app::UnityTls_unitytls_tlsctx__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTls_unitytls_tlsctx__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTls_unitytls_tlsctx__Class* get_class() {
            return il2cpp::get_nested_class<app::UnityTls_unitytls_tlsctx__Class>(type_info(), "Mono.Unity", "UnityTls", "unitytls_tlsctx");
        }
        inline app::UnityTls_unitytls_tlsctx* create() {
            return il2cpp::create_object<app::UnityTls_unitytls_tlsctx>(get_class());
        }
        inline app::UnityTls_unitytls_tlsctx__Boxed* box(app::UnityTls_unitytls_tlsctx value) {
            return il2cpp::box_value<app::UnityTls_unitytls_tlsctx__Boxed>(get_class(), value);
        }
    } // namespace UnityTls_unitytls_tlsctx
} // namespace app::classes::types
