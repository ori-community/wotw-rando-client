#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTls {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityTls__Class** type_info;
        inline app::UnityTls__Class* get_class() {
            return il2cpp::get_class<app::UnityTls__Class>(type_info, "Mono.Unity", "UnityTls");
        }
        inline app::UnityTls* create() {
            return il2cpp::create_object<app::UnityTls>(get_class());
        }
    } // namespace UnityTls
} // namespace app::classes::types
