#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordProtocol {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecordProtocol__Class** type_info;
        inline app::RecordProtocol__Class* get_class() {
            return il2cpp::get_class<app::RecordProtocol__Class>(type_info, "Mono.Security.Protocol.Tls", "RecordProtocol");
        }
        inline app::RecordProtocol* create() {
            return il2cpp::create_object<app::RecordProtocol>(get_class());
        }
    } // namespace RecordProtocol
} // namespace app::classes::types
