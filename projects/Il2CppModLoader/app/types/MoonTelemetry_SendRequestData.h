#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MoonTelemetry_SendRequestData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MoonTelemetry_SendRequestData__Class** type_info;
        inline app::MoonTelemetry_SendRequestData__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_SendRequestData__Class>(type_info, "", "MoonTelemetry", "SendRequestData");
        }
        inline app::MoonTelemetry_SendRequestData* create() {
            return il2cpp::create_object<app::MoonTelemetry_SendRequestData>(get_class());
        }
        inline app::MoonTelemetry_SendRequestData__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonTelemetry_SendRequestData__Array>(get_class(), size);
        }
    } // namespace MoonTelemetry_SendRequestData
} // namespace app::classes::types
