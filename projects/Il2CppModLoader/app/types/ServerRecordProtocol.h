#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ServerRecordProtocol {
        inline app::ServerRecordProtocol__Class** type_info = (app::ServerRecordProtocol__Class**)(modloader::win::memory::resolve_rva(0x0472B318));
        inline app::ServerRecordProtocol__Class* get_class() {
            return il2cpp::get_class<app::ServerRecordProtocol__Class>(type_info, "Mono.Security.Protocol.Tls", "ServerRecordProtocol");
        }
        inline app::ServerRecordProtocol* create() {
            return il2cpp::create_object<app::ServerRecordProtocol>(get_class());
        }
    } // namespace ServerRecordProtocol
} // namespace app::classes::types
