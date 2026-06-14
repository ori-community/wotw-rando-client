#pragma once
#include <Modloader/app/structs/ClientSessionCache.h>
#include <Modloader/app/structs/ClientSessionCache__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientSessionCache {
        inline app::ClientSessionCache__Class** type_info() {
            static app::ClientSessionCache__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClientSessionCache__Class**)(modloader::win::memory::resolve_rva(0x0471F9A0));
            }
            return cache;
        }
        inline app::ClientSessionCache__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionCache__Class>(type_info(), "Mono.Security.Protocol.Tls", "ClientSessionCache");
        }
        inline app::ClientSessionCache* create() {
            return il2cpp::create_object<app::ClientSessionCache>(get_class());
        }
    } // namespace ClientSessionCache
} // namespace app::classes::types
