#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ClientRecordProtocol {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ClientRecordProtocol__Class** type_info;
        inline app::ClientRecordProtocol__Class* get_class() {
            return il2cpp::get_class<app::ClientRecordProtocol__Class>(type_info, "Mono.Security.Protocol.Tls", "ClientRecordProtocol");
        }
        inline app::ClientRecordProtocol* create() {
            return il2cpp::create_object<app::ClientRecordProtocol>(get_class());
        }
    } // namespace ClientRecordProtocol
} // namespace app::classes::types
