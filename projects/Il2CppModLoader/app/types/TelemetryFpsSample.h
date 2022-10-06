#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TelemetryFpsSample {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TelemetryFpsSample__Class** type_info;
        inline app::TelemetryFpsSample__Class* get_class() {
            return il2cpp::get_class<app::TelemetryFpsSample__Class>(type_info, "", "TelemetryFpsSample");
        }
        inline app::TelemetryFpsSample* create() {
            return il2cpp::create_object<app::TelemetryFpsSample>(get_class());
        }
        inline app::TelemetryFpsSample__Array* create_array(int size) {
            return il2cpp::array_new<app::TelemetryFpsSample__Array>(get_class(), size);
        }
        inline app::TelemetryFpsSample__Array* create_array(const std::vector<app::TelemetryFpsSample*>& items) {
            return il2cpp::array_new<app::TelemetryFpsSample__Array>(get_class(), items);
        }
    } // namespace TelemetryFpsSample
} // namespace app::classes::types
