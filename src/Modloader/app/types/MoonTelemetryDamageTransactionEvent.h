#pragma once
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent.h>
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryDamageTransactionEvent {
        inline app::MoonTelemetryDamageTransactionEvent__Class** type_info() {
            static app::MoonTelemetryDamageTransactionEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryDamageTransactionEvent__Class**)(modloader::win::memory::resolve_rva(0x04731A28));
            }
            return cache;
        }
        inline app::MoonTelemetryDamageTransactionEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryDamageTransactionEvent__Class>(type_info(), "", "MoonTelemetryDamageTransactionEvent");
        }
        inline app::MoonTelemetryDamageTransactionEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryDamageTransactionEvent>(get_class());
        }
    } // namespace MoonTelemetryDamageTransactionEvent
} // namespace app::classes::types
