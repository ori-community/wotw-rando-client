#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsServerHello_1 {
        inline app::TlsServerHello_1__Class** type_info = (app::TlsServerHello_1__Class**)(modloader::win::memory::resolve_rva(0x04780308));
        inline app::TlsServerHello_1__Class* get_class() {
            return il2cpp::get_class<app::TlsServerHello_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerHello");
        }
        inline app::TlsServerHello_1* create() {
            return il2cpp::create_object<app::TlsServerHello_1>(get_class());
        }
    } // namespace TlsServerHello_1
} // namespace app::classes::types
