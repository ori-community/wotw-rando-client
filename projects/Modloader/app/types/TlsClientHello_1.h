#pragma once
#include <Modloader/app/structs/TlsClientHello_1.h>
#include <Modloader/app/structs/TlsClientHello_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsClientHello_1 {
        inline app::TlsClientHello_1__Class** type_info() {
            static app::TlsClientHello_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsClientHello_1__Class**)(modloader::win::memory::resolve_rva(0x0477B9D0));
            }
            return cache;
        }
        inline app::TlsClientHello_1__Class* get_class() {
            return il2cpp::get_class<app::TlsClientHello_1__Class>(type_info(), "Mono.Security.Protocol.Tls.Handshake.Client", "TlsClientHello");
        }
        inline app::TlsClientHello_1* create() {
            return il2cpp::create_object<app::TlsClientHello_1>(get_class());
        }
    } // namespace TlsClientHello_1
} // namespace app::classes::types
