#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry_SendRequestData__Array {
        namespace {
            app::MoonTelemetry_SendRequestData__Array__Class* type_info_ref = nullptr;
        }
        app::MoonTelemetry_SendRequestData__Array__Class** type_info = &type_info_ref;
        inline app::MoonTelemetry_SendRequestData__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonTelemetry_SendRequestData__Array__Class>(type_info, "", "MoonTelemetry+SendRequestData[]");
        }
        inline app::MoonTelemetry_SendRequestData__Array* create() {
            return il2cpp::create_object<app::MoonTelemetry_SendRequestData__Array>(get_class());
        }
    } // namespace MoonTelemetry_SendRequestData__Array
} // namespace app::classes::types
