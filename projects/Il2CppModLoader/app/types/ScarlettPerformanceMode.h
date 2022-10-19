#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScarlettPerformanceMode {
        namespace {
            inline app::ScarlettPerformanceMode__Class* type_info_ref = nullptr;
        }
        inline app::ScarlettPerformanceMode__Class** type_info = &type_info_ref;
        inline app::ScarlettPerformanceMode__Class* get_class() {
            return il2cpp::get_class<app::ScarlettPerformanceMode__Class>(type_info, "Moon.Telemetry.Performance.Settings", "ScarlettPerformanceMode");
        }
        inline app::ScarlettPerformanceMode* create() {
            return il2cpp::create_object<app::ScarlettPerformanceMode>(get_class());
        }
    } // namespace ScarlettPerformanceMode
} // namespace app::classes::types
