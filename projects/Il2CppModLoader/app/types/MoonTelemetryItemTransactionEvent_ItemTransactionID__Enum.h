#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class** type_info;
        inline app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum__Class>(type_info, "", "MoonTelemetryItemTransactionEvent", "ItemTransactionID");
        }
        inline app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum>(get_class());
        }
    } // namespace MoonTelemetryItemTransactionEvent_ItemTransactionID__Enum
} // namespace app::classes::types
