#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryItemTransactionEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryItemTransactionEvent__Class** type_info;
        inline app::MoonTelemetryItemTransactionEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryItemTransactionEvent__Class>(type_info, "", "MoonTelemetryItemTransactionEvent");
        }
        inline app::MoonTelemetryItemTransactionEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryItemTransactionEvent>(get_class());
        }
    } // namespace MoonTelemetryItemTransactionEvent
} // namespace app::classes::types
