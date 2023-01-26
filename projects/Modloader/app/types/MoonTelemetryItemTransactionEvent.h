#pragma once
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent.h>
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryItemTransactionEvent {
        inline app::MoonTelemetryItemTransactionEvent__Class** type_info() {
            static app::MoonTelemetryItemTransactionEvent__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryItemTransactionEvent__Class**)(modloader::win::memory::resolve_rva(0x0475A1E8));
            }
            return cache;
        }
        inline app::MoonTelemetryItemTransactionEvent__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryItemTransactionEvent__Class>(type_info(), "", "MoonTelemetryItemTransactionEvent");
        }
        inline app::MoonTelemetryItemTransactionEvent* create() {
            return il2cpp::create_object<app::MoonTelemetryItemTransactionEvent>(get_class());
        }
    } // namespace MoonTelemetryItemTransactionEvent
} // namespace app::classes::types
