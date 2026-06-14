#pragma once
#include <Modloader/app/structs/UnityTlsProvider.h>
#include <Modloader/app/structs/UnityTlsProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityTlsProvider {
        inline app::UnityTlsProvider__Class** type_info() {
            static app::UnityTlsProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UnityTlsProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UnityTlsProvider__Class* get_class() {
            return il2cpp::get_class<app::UnityTlsProvider__Class>(type_info(), "Mono.Unity", "UnityTlsProvider");
        }
        inline app::UnityTlsProvider* create() {
            return il2cpp::create_object<app::UnityTlsProvider>(get_class());
        }
    } // namespace UnityTlsProvider
} // namespace app::classes::types
