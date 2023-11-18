#pragma once
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum.h>
#include <Modloader/app/structs/MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum {
        inline app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class** type_info() {
            static app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class**)(modloader::win::memory::resolve_rva(0x0473AE50));
            }
            return cache;
        }
        inline app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class>(type_info(), "", "MoonTelemetryItemTransactionEvent", "ItemTransactionID");
        }
        inline app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum>(get_class());
        }
    } // namespace MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum
} // namespace app::classes::types
