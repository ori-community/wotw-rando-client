#pragma once
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent_DamageEntity__Enum.h>
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array.h>
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum {
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class** type_info() {
            static app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477B020));
            }
            return cache;
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class>(type_info(), "", "MoonTelemetryDamageTransactionEvent", "DamageEntity");
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum>(get_class());
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array>(get_class(), size);
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array* create_array(const std::vector<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum*>& items) {
            return il2cpp::array_new<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array>(get_class(), items);
        }
    } // namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum
} // namespace app::classes::types
