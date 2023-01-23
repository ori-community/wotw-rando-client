#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RecordProtocol__Class.h>
#include <Modloader/app/structs/RecordProtocol.h>

namespace app::classes::types {
    namespace RecordProtocol {
        inline app::RecordProtocol__Class** type_info = (app::RecordProtocol__Class**)(modloader::win::memory::resolve_rva(0x0472DC68));
        inline app::RecordProtocol__Class* get_class() {
            return il2cpp::get_class<app::RecordProtocol__Class>(type_info, "Mono.Security.Protocol.Tls", "RecordProtocol");
        }
        inline app::RecordProtocol* create() {
            return il2cpp::create_object<app::RecordProtocol>(get_class());
        }
    } // namespace RecordProtocol
} // namespace app::classes::types
