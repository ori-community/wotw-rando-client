#pragma once
#include <Modloader/app/structs/TlsClientSettings.h>
#include <Modloader/app/structs/TlsClientSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsClientSettings {
        inline app::TlsClientSettings__Class** type_info() {
            static app::TlsClientSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsClientSettings__Class**)(modloader::win::memory::resolve_rva(0x04715880));
            }
            return cache;
        }
        inline app::TlsClientSettings__Class* get_class() {
            return il2cpp::get_class<app::TlsClientSettings__Class>(type_info(), "Mono.Security.Protocol.Tls", "TlsClientSettings");
        }
        inline app::TlsClientSettings* create() {
            return il2cpp::create_object<app::TlsClientSettings>(get_class());
        }
    } // namespace TlsClientSettings
} // namespace app::classes::types
