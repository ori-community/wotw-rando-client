#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordProtocol_SendRecordAsyncResult__Class.h>
#include <Modloader/app/structs/RecordProtocol_SendRecordAsyncResult.h>

namespace app::classes::types {
    namespace RecordProtocol_SendRecordAsyncResult {
        inline app::RecordProtocol_SendRecordAsyncResult__Class** type_info = (app::RecordProtocol_SendRecordAsyncResult__Class**)(modloader::win::memory::resolve_rva(0x0472B628));
        inline app::RecordProtocol_SendRecordAsyncResult__Class* get_class() {
            return il2cpp::get_nested_class<app::RecordProtocol_SendRecordAsyncResult__Class>(type_info, "Mono.Security.Protocol.Tls", "RecordProtocol", "SendRecordAsyncResult");
        }
        inline app::RecordProtocol_SendRecordAsyncResult* create() {
            return il2cpp::create_object<app::RecordProtocol_SendRecordAsyncResult>(get_class());
        }
    } // namespace RecordProtocol_SendRecordAsyncResult
} // namespace app::classes::types
