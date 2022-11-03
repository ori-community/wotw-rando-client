#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SslCipherSuite {
        inline app::SslCipherSuite__Class** type_info = (app::SslCipherSuite__Class**)(modloader::win::memory::resolve_rva(0x0475B6C8));
        inline app::SslCipherSuite__Class* get_class() {
            return il2cpp::get_class<app::SslCipherSuite__Class>(type_info, "Mono.Security.Protocol.Tls", "SslCipherSuite");
        }
        inline app::SslCipherSuite* create() {
            return il2cpp::create_object<app::SslCipherSuite>(get_class());
        }
    } // namespace SslCipherSuite
} // namespace app::classes::types
