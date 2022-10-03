#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerRecordProtocol {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerRecordProtocol__Class** type_info;
        inline app::ServerRecordProtocol__Class* get_class() {
            return il2cpp::get_class<app::ServerRecordProtocol__Class>(type_info, "Mono.Security.Protocol.Tls", "ServerRecordProtocol");
        }
        inline app::ServerRecordProtocol* create() {
            return il2cpp::create_object<app::ServerRecordProtocol>(get_class());
        }
    } // namespace ServerRecordProtocol
} // namespace app::classes::types
