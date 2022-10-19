#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClientCertificateType__Enum__Array {
        inline app::ClientCertificateType__Enum__Array__Class** type_info = (app::ClientCertificateType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0471BC48));
        inline app::ClientCertificateType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::ClientCertificateType__Enum__Array__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake", "ClientCertificateType[]");
        }
        inline app::ClientCertificateType__Enum__Array* create() {
            return il2cpp::create_object<app::ClientCertificateType__Enum__Array>(get_class());
        }
    } // namespace ClientCertificateType__Enum__Array
} // namespace app::classes::types
