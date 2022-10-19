#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TelemetryFpsSample {
        inline app::TelemetryFpsSample__Class** type_info = (app::TelemetryFpsSample__Class**)(modloader::win::memory::resolve_rva(0x0473CA28));
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
