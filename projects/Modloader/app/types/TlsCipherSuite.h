#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsCipherSuite {
        inline app::TlsCipherSuite__Class** type_info = (app::TlsCipherSuite__Class**)(modloader::win::memory::resolve_rva(0x0475A4A0));
        inline app::TlsCipherSuite__Class* get_class() {
            return il2cpp::get_class<app::TlsCipherSuite__Class>(type_info, "Mono.Security.Protocol.Tls", "TlsCipherSuite");
        }
        inline app::TlsCipherSuite* create() {
            return il2cpp::create_object<app::TlsCipherSuite>(get_class());
        }
    } // namespace TlsCipherSuite
} // namespace app::classes::types
