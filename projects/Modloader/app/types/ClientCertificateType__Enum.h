#pragma once
#include <Modloader/app/structs/ClientCertificateType__Enum.h>
#include <Modloader/app/structs/ClientCertificateType__Enum__Array.h>
#include <Modloader/app/structs/ClientCertificateType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientCertificateType__Enum {
        inline app::ClientCertificateType__Enum__Class** type_info() {
            static app::ClientCertificateType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ClientCertificateType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ClientCertificateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::ClientCertificateType__Enum__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake", "ClientCertificateType");
        }
        inline app::ClientCertificateType__Enum* create() {
            return il2cpp::create_object<app::ClientCertificateType__Enum>(get_class());
        }
        inline app::ClientCertificateType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::ClientCertificateType__Enum__Array>(get_class(), size);
        }
        inline app::ClientCertificateType__Enum__Array* create_array(const std::vector<app::ClientCertificateType__Enum*>& items) {
            return il2cpp::array_new<app::ClientCertificateType__Enum__Array>(get_class(), items);
        }
    } // namespace ClientCertificateType__Enum
} // namespace app::classes::types
