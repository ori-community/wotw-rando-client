#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class** type_info;
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Class>(type_info, "", "MoonTelemetryDamageTransactionEvent", "DamageEntity");
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum* create() {
            return il2cpp::create_object<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum>(get_class());
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array>(get_class(), size);
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array* create_array(const std::vector<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Boxed*>& items) {
            return il2cpp::array_new<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array>(get_class(), items);
        }
    } // namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum
} // namespace app::classes::types
