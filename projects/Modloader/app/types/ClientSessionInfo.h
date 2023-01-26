#pragma once
#include <Modloader/app/structs/ClientSessionInfo.h>
#include <Modloader/app/structs/ClientSessionInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ClientSessionInfo {
        inline app::ClientSessionInfo__Class** type_info() {
            static app::ClientSessionInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ClientSessionInfo__Class**)(modloader::win::memory::resolve_rva(0x04763348));
            }
            return cache;
        }
        inline app::ClientSessionInfo__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionInfo__Class>(type_info(), "Mono.Security.Protocol.Tls", "ClientSessionInfo");
        }
        inline app::ClientSessionInfo* create() {
            return il2cpp::create_object<app::ClientSessionInfo>(get_class());
        }
    } // namespace ClientSessionInfo
} // namespace app::classes::types
