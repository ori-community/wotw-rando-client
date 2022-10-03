#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoTlsSettings {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoTlsSettings__Class** type_info;
        inline app::MonoTlsSettings__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsSettings__Class>(type_info, "Mono.Security.Interface", "MonoTlsSettings");
        }
        inline app::MonoTlsSettings* create() {
            return il2cpp::create_object<app::MonoTlsSettings>(get_class());
        }
    } // namespace MonoTlsSettings
} // namespace app::classes::types
