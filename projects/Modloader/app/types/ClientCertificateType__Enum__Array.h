#pragma once
#include <Modloader/app/structs/ClientCertificateType__Enum__Array.h>
#include <Modloader/app/structs/ClientCertificateType__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientCertificateType__Enum__Array {
        inline app::ClientCertificateType__Enum__Array__Class** type_info() {
            static app::ClientCertificateType__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClientCertificateType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x0471BC48));
            }
            return cache;
        }
        inline app::ClientCertificateType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::ClientCertificateType__Enum__Array__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake", "ClientCertificateType[]");
        }
        inline app::ClientCertificateType__Enum__Array* create() {
            return il2cpp::create_object<app::ClientCertificateType__Enum__Array>(get_class());
        }
    } // namespace ClientCertificateType__Enum__Array
} // namespace app::classes::types
