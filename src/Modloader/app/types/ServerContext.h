#pragma once
#include <Modloader/app/structs/ServerContext.h>
#include <Modloader/app/structs/ServerContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerContext {
        inline app::ServerContext__Class** type_info() {
            static app::ServerContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerContext__Class**)(modloader::win::memory::resolve_rva(0x04723038));
            }
            return cache;
        }
        inline app::ServerContext__Class* get_class() {
            return il2cpp::get_class<app::ServerContext__Class>(type_info(), "Mono.Security.Protocol.Tls", "ServerContext");
        }
        inline app::ServerContext* create() {
            return il2cpp::create_object<app::ServerContext>(get_class());
        }
    } // namespace ServerContext
} // namespace app::classes::types
