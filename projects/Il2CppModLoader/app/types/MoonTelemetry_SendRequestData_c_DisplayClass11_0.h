#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonTelemetry_SendRequestData_c_DisplayClass11_0 {
        inline app::MoonTelemetry_SendRequestData_c_DisplayClass11_0__Class** type_info = (app::MoonTelemetry_SendRequestData_c_DisplayClass11_0__Class**)(modloader::win::memory::resolve_rva(0x047494D8));
        inline app::MoonTelemetry_SendRequestData_c_DisplayClass11_0__Class* get_class() {
            return il2cpp::get_nested_class<app::MoonTelemetry_SendRequestData_c_DisplayClass11_0__Class>(type_info, "", "MoonTelemetry+SendRequestData", "<>c__DisplayClass11_0");
        }
        inline app::MoonTelemetry_SendRequestData_c_DisplayClass11_0* create() {
            return il2cpp::create_object<app::MoonTelemetry_SendRequestData_c_DisplayClass11_0>(get_class());
        }
    } // namespace MoonTelemetry_SendRequestData_c_DisplayClass11_0
} // namespace app::classes::types
