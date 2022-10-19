#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerContext {
        inline app::ServerContext__Class** type_info = (app::ServerContext__Class**)(modloader::win::memory::resolve_rva(0x04723038));
        inline app::ServerContext__Class* get_class() {
            return il2cpp::get_class<app::ServerContext__Class>(type_info, "Mono.Security.Protocol.Tls", "ServerContext");
        }
        inline app::ServerContext* create() {
            return il2cpp::create_object<app::ServerContext>(get_class());
        }
    } // namespace ServerContext
} // namespace app::classes::types
