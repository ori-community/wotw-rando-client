#pragma once
#include <Modloader/app/structs/MoonTelemetry_SendRequestData__Array.h>
#include <Modloader/app/structs/MoonTelemetry_SendRequestData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry_SendRequestData__Array {
        inline app::MoonTelemetry_SendRequestData__Array__Class** type_info() {
            static app::MoonTelemetry_SendRequestData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTelemetry_SendRequestData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTelemetry_SendRequestData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetry_SendRequestData__Array__Class>(type_info(), "", "MoonTelemetry+SendRequestData[]");
        }
        inline app::MoonTelemetry_SendRequestData__Array* create() {
            return il2cpp::create_object<app::MoonTelemetry_SendRequestData__Array>(get_class());
        }
    } // namespace MoonTelemetry_SendRequestData__Array
} // namespace app::classes::types
