#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TlsProtocols__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TlsProtocols__Enum__Class** type_info;
        inline app::TlsProtocols__Enum__Class* get_class() {
            return il2cpp::get_class<app::TlsProtocols__Enum__Class>(type_info, "Mono.Security.Interface", "TlsProtocols");
        }
        inline app::TlsProtocols__Enum* create() {
            return il2cpp::create_object<app::TlsProtocols__Enum>(get_class());
        }
    } // namespace TlsProtocols__Enum
} // namespace app::classes::types
