#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsException_1 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsException_1__Class** type_info;
        inline app::TlsException_1__Class* get_class() {
            return il2cpp::get_class<app::TlsException_1__Class>(type_info, "Mono.Security.Interface", "TlsException");
        }
        inline app::TlsException_1* create() {
            return il2cpp::create_object<app::TlsException_1>(get_class());
        }
    } // namespace TlsException_1
} // namespace app::classes::types
