#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CipherSuiteCollection {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CipherSuiteCollection__Class** type_info;
        inline app::CipherSuiteCollection__Class* get_class() {
            return il2cpp::get_class<app::CipherSuiteCollection__Class>(type_info, "Mono.Security.Protocol.Tls", "CipherSuiteCollection");
        }
        inline app::CipherSuiteCollection* create() {
            return il2cpp::create_object<app::CipherSuiteCollection>(get_class());
        }
    } // namespace CipherSuiteCollection
} // namespace app::classes::types
