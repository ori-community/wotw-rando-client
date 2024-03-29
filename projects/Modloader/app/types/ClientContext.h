#pragma once
#include <Modloader/app/structs/ClientContext.h>
#include <Modloader/app/structs/ClientContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientContext {
        inline app::ClientContext__Class** type_info() {
            static app::ClientContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClientContext__Class**)(modloader::win::memory::resolve_rva(0x0477DFB8));
            }
            return cache;
        }
        inline app::ClientContext__Class* get_class() {
            return il2cpp::get_class<app::ClientContext__Class>(type_info(), "Mono.Security.Protocol.Tls", "ClientContext");
        }
        inline app::ClientContext* create() {
            return il2cpp::create_object<app::ClientContext>(get_class());
        }
    } // namespace ClientContext
} // namespace app::classes::types
