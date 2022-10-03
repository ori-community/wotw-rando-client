#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryDamageTransactionEvent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryDamageTransactionEvent__Class** type_info;
        inline app::MoonTelemetryDamageTransactionEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryDamageTransactionEvent__Class>(type_info, "", "MoonTelemetryDamageTransactionEvent");
        }
        inline app::MoonTelemetryDamageTransactionEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryDamageTransactionEvent>(get_class());
        }
    } // namespace MoonTelemetryDamageTransactionEvent
} // namespace app::classes::types
