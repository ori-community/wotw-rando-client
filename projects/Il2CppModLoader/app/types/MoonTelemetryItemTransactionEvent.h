#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryItemTransactionEvent {
        inline app::MoonTelemetryItemTransactionEvent__Class** type_info = (app::MoonTelemetryItemTransactionEvent__Class**)(modloader::win::memory::resolve_rva(0x0475A1E8));
        inline app::MoonTelemetryItemTransactionEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryItemTransactionEvent__Class>(type_info, "", "MoonTelemetryItemTransactionEvent");
        }
        inline app::MoonTelemetryItemTransactionEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryItemTransactionEvent>(get_class());
        }
    } // namespace MoonTelemetryItemTransactionEvent
} // namespace app::classes::types
