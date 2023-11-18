#pragma once
#include <Modloader/app/structs/TlsServerHello_1.h>
#include <Modloader/app/structs/TlsServerHello_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsServerHello_1 {
        inline app::TlsServerHello_1__Class** type_info() {
            static app::TlsServerHello_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsServerHello_1__Class**)(modloader::win::memory::resolve_rva(0x04780308));
            }
            return cache;
        }
        inline app::TlsServerHello_1__Class* get_class() {
            return il2cpp::get_class<app::TlsServerHello_1__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerHello");
        }
        inline app::TlsServerHello_1* create() {
            return il2cpp::create_object<app::TlsServerHello_1>(get_class());
        }
    } // namespace TlsServerHello_1
} // namespace app::classes::types
