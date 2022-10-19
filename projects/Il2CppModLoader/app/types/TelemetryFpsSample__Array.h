#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryFpsSample__Array {
        namespace {
            inline app::TelemetryFpsSample__Array__Class* type_info_ref = nullptr;
        }
        inline app::TelemetryFpsSample__Array__Class** type_info = &type_info_ref;
        inline app::TelemetryFpsSample__Array__Class* get_class() {
            return il2cpp::get_class<app::TelemetryFpsSample__Array__Class>(type_info, "", "TelemetryFpsSample[]");
        }
        inline app::TelemetryFpsSample__Array* create() {
            return il2cpp::create_object<app::TelemetryFpsSample__Array>(get_class());
        }
    } // namespace TelemetryFpsSample__Array
} // namespace app::classes::types
