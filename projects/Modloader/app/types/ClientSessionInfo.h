#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClientSessionInfo__Class.h>
#include <Modloader/app/structs/ClientSessionInfo.h>

namespace app::classes::types {
    namespace ClientSessionInfo {
        inline app::ClientSessionInfo__Class** type_info = (app::ClientSessionInfo__Class**)(modloader::win::memory::resolve_rva(0x04763348));
        inline app::ClientSessionInfo__Class* get_class() {
            return il2cpp::get_class<app::ClientSessionInfo__Class>(type_info, "Mono.Security.Protocol.Tls", "ClientSessionInfo");
        }
        inline app::ClientSessionInfo* create() {
            return il2cpp::create_object<app::ClientSessionInfo>(get_class());
        }
    } // namespace ClientSessionInfo
} // namespace app::classes::types
