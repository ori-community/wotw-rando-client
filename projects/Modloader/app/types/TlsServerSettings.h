#pragma once
#include <Modloader/app/structs/TlsServerSettings.h>
#include <Modloader/app/structs/TlsServerSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsServerSettings {
        inline app::TlsServerSettings__Class** type_info() {
            static app::TlsServerSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsServerSettings__Class**)(modloader::win::memory::resolve_rva(0x0475DDD0));
            }
            return cache;
        }
        inline app::TlsServerSettings__Class* get_class() {
            return il2cpp::get_class<app::TlsServerSettings__Class>(type_info(), "Mono.Security.Protocol.Tls", "TlsServerSettings");
        }
        inline app::TlsServerSettings* create() {
            return il2cpp::create_object<app::TlsServerSettings>(get_class());
        }
    } // namespace TlsServerSettings
} // namespace app::classes::types
