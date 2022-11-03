#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array {
        namespace {
            inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class* type_info_ref = nullptr;
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class** type_info = &type_info_ref;
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array__Class>(type_info, "", "MoonTelemetryDamageTransactionEvent+DamageEntity[]");
        }
        inline app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array* create() {
            return il2cpp::create_object<app::MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array>(get_class());
        }
    } // namespace MoonTelemetryDamageTransactionEvent_DamageEntity__Enum__Array
} // namespace app::classes::types
