#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsServerFinished_1 {
        inline app::TlsServerFinished_1__Class** type_info = (app::TlsServerFinished_1__Class**)(modloader::win::memory::resolve_rva(0x047896D0));
        inline app::TlsServerFinished_1__Class* get_class() {
            return il2cpp::get_class<app::TlsServerFinished_1__Class>(type_info, "Mono.Security.Protocol.Tls.Handshake.Client", "TlsServerFinished");
        }
        inline app::TlsServerFinished_1* create() {
            return il2cpp::create_object<app::TlsServerFinished_1>(get_class());
        }
    } // namespace TlsServerFinished_1
} // namespace app::classes::types
