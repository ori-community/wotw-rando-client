#pragma once
#include <Modloader/app/structs/TlsCipherSuite.h>
#include <Modloader/app/structs/TlsCipherSuite__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TlsCipherSuite {
        inline app::TlsCipherSuite__Class** type_info() {
            static app::TlsCipherSuite__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TlsCipherSuite__Class**)(modloader::win::memory::resolve_rva(0x0475A4A0));
            }
            return cache;
        }
        inline app::TlsCipherSuite__Class* get_class() {
            return il2cpp::get_class<app::TlsCipherSuite__Class>(type_info(), "Mono.Security.Protocol.Tls", "TlsCipherSuite");
        }
        inline app::TlsCipherSuite* create() {
            return il2cpp::create_object<app::TlsCipherSuite>(get_class());
        }
    } // namespace TlsCipherSuite
} // namespace app::classes::types
