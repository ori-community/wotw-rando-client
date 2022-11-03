#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ClientContext {
        inline app::ClientContext__Class** type_info = (app::ClientContext__Class**)(modloader::win::memory::resolve_rva(0x0477DFB8));
        inline app::ClientContext__Class* get_class() {
            return il2cpp::get_class<app::ClientContext__Class>(type_info, "Mono.Security.Protocol.Tls", "ClientContext");
        }
        inline app::ClientContext* create() {
            return il2cpp::create_object<app::ClientContext>(get_class());
        }
    } // namespace ClientContext
} // namespace app::classes::types
