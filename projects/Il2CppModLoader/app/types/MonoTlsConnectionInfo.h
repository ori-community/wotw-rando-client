#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MonoTlsConnectionInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MonoTlsConnectionInfo__Class** type_info;
        inline app::MonoTlsConnectionInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoTlsConnectionInfo__Class>(type_info, "Mono.Security.Interface", "MonoTlsConnectionInfo");
        }
        inline app::MonoTlsConnectionInfo* create() {
            return il2cpp::create_object<app::MonoTlsConnectionInfo>(get_class());
        }
    } // namespace MonoTlsConnectionInfo
} // namespace app::classes::types
