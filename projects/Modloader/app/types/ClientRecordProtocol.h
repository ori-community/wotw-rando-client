#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ClientRecordProtocol__Class.h>
#include <Modloader/app/structs/ClientRecordProtocol.h>

namespace app::classes::types {
    namespace ClientRecordProtocol {
        inline app::ClientRecordProtocol__Class** type_info = (app::ClientRecordProtocol__Class**)(modloader::win::memory::resolve_rva(0x0471F180));
        inline app::ClientRecordProtocol__Class* get_class() {
            return il2cpp::get_class<app::ClientRecordProtocol__Class>(type_info, "Mono.Security.Protocol.Tls", "ClientRecordProtocol");
        }
        inline app::ClientRecordProtocol* create() {
            return il2cpp::create_object<app::ClientRecordProtocol>(get_class());
        }
    } // namespace ClientRecordProtocol
} // namespace app::classes::types
