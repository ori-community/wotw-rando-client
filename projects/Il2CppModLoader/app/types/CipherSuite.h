#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CipherSuite {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CipherSuite__Class** type_info;
        inline app::CipherSuite__Class* get_class() {
            return il2cpp::get_class<app::CipherSuite__Class>(type_info, "Mono.Security.Protocol.Tls", "CipherSuite");
        }
        inline app::CipherSuite* create() {
            return il2cpp::create_object<app::CipherSuite>(get_class());
        }
        inline app::CipherSuite__Array* create_array(int size) {
            return il2cpp::array_new<app::CipherSuite__Array>(get_class(), size);
        }
    } // namespace CipherSuite
} // namespace app::classes::types
