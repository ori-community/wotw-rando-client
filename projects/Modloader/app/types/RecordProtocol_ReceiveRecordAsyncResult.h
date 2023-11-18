#pragma once
#include <Modloader/app/structs/RecordProtocol_ReceiveRecordAsyncResult.h>
#include <Modloader/app/structs/RecordProtocol_ReceiveRecordAsyncResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordProtocol_ReceiveRecordAsyncResult {
        inline app::RecordProtocol_ReceiveRecordAsyncResult__Class** type_info() {
            static app::RecordProtocol_ReceiveRecordAsyncResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RecordProtocol_ReceiveRecordAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x047114B0));
            }
            return cache;
        }
        inline app::RecordProtocol_ReceiveRecordAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::RecordProtocol_ReceiveRecordAsyncResult__Class>(type_info(), "Mono.Security.Protocol.Tls", "RecordProtocol", "ReceiveRecordAsyncResult");
        }
        inline app::RecordProtocol_ReceiveRecordAsyncResult* create() {
            return il2cpp::create_object<app::RecordProtocol_ReceiveRecordAsyncResult>(get_class());
        }
    } // namespace RecordProtocol_ReceiveRecordAsyncResult
} // namespace app::classes::types
