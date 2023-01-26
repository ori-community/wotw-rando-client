#pragma once
#include <Modloader/app/structs/ServerRecordProtocol.h>
#include <Modloader/app/structs/ServerRecordProtocol__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ServerRecordProtocol {
        inline app::ServerRecordProtocol__Class** type_info() {
            static app::ServerRecordProtocol__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ServerRecordProtocol__Class**)(modloader::win::memory::resolve_rva(0x0472B318));
            }
            return cache;
        }
        inline app::ServerRecordProtocol__Class* get_class() {
            return il2cpp::get_class<app::ServerRecordProtocol__Class>(type_info(), "Mono.Security.Protocol.Tls", "ServerRecordProtocol");
        }
        inline app::ServerRecordProtocol* create() {
            return il2cpp::create_object<app::ServerRecordProtocol>(get_class());
        }
    } // namespace ServerRecordProtocol
} // namespace app::classes::types
