#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RecordProtocol_ReceiveRecordAsyncResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RecordProtocol_ReceiveRecordAsyncResult__Class** type_info;
        inline app::RecordProtocol_ReceiveRecordAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::RecordProtocol_ReceiveRecordAsyncResult__Class>(type_info, "Mono.Security.Protocol.Tls", "RecordProtocol", "ReceiveRecordAsyncResult");
        }
        inline app::RecordProtocol_ReceiveRecordAsyncResult* create() {
            return il2cpp::create_object<app::RecordProtocol_ReceiveRecordAsyncResult>(get_class());
        }
    } // namespace RecordProtocol_ReceiveRecordAsyncResult
} // namespace app::classes::types
