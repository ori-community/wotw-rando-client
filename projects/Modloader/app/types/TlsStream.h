#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TlsStream {
        inline app::TlsStream__Class** type_info = (app::TlsStream__Class**)(modloader::win::memory::resolve_rva(0x04761698));
        inline app::TlsStream__Class* get_class() {
            return il2cpp::get_class<app::TlsStream__Class>(type_info, "Mono.Security.Protocol.Tls", "TlsStream");
        }
        inline app::TlsStream* create() {
            return il2cpp::create_object<app::TlsStream>(get_class());
        }
    } // namespace TlsStream
} // namespace app::classes::types
