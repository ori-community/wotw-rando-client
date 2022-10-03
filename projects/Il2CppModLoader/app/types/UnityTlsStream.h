#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UnityTlsStream {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UnityTlsStream__Class** type_info;
        inline app::UnityTlsStream__Class* get_class() {
            return il2cpp::get_class<app::UnityTlsStream__Class>(type_info, "Mono.Unity", "UnityTlsStream");
        }
        inline app::UnityTlsStream* create() {
            return il2cpp::create_object<app::UnityTlsStream>(get_class());
        }
    } // namespace UnityTlsStream
} // namespace app::classes::types
