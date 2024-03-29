#pragma once
#include <Modloader/app/structs/TlsServerFinished.h>
#include <Modloader/app/structs/TlsServerFinished__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsServerFinished {
        inline app::TlsServerFinished__Class** type_info() {
            static app::TlsServerFinished__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsServerFinished__Class**)(modloader::win::memory::resolve_rva(0x0470DD78));
            }
            return cache;
        }
        inline app::TlsServerFinished__Class* get_class() {
            return il2cpp::get_class<app::TlsServerFinished__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake.Server", "TlsServerFinished");
        }
        inline app::TlsServerFinished* create() {
            return il2cpp::create_object<app::TlsServerFinished>(get_class());
        }
    } // namespace TlsServerFinished
} // namespace app::classes::types
