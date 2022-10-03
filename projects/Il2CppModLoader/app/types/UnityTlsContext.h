#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTlsContext {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityTlsContext__Class** type_info;
        inline app::UnityTlsContext__Class* get_class() {
            return il2cpp::get_class<app::UnityTlsContext__Class>(type_info, "Mono.Unity", "UnityTlsContext");
        }
        inline app::UnityTlsContext* create() {
            return il2cpp::create_object<app::UnityTlsContext>(get_class());
        }
    } // namespace UnityTlsContext
} // namespace app::classes::types
