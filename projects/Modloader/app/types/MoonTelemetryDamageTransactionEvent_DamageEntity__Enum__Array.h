#pragma once
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array.h>
#include <Modloader/app/structs/MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array {
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class** type_info() {
            static app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class>(type_info(), "", "MoonTelemetryDamageTransactionEvent+DamageEntity[]");
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array* create() {
            return il2cpp::create_object<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array>(get_class());
        }
    } // namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array
} // namespace app::classes::types
