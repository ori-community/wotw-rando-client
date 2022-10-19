#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ProfilingSettings_Setting__Array {
        inline app::ProfilingSettings_Setting__Array__Class** type_info = (app::ProfilingSettings_Setting__Array__Class**)(modloader::win::memory::resolve_rva(0x0472C670));
        inline app::ProfilingSettings_Setting__Array__Class* get_class() {
            return il2cpp::get_class<app::ProfilingSettings_Setting__Array__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings+Setting[]");
        }
        inline app::ProfilingSettings_Setting__Array* create() {
            return il2cpp::create_object<app::ProfilingSettings_Setting__Array>(get_class());
        }
        inline app::ProfilingSettings_Setting__Array__Array* create_array(int size) {
            return il2cpp::array_new<app::ProfilingSettings_Setting__Array__Array>(get_class(), size);
        }
        inline app::ProfilingSettings_Setting__Array__Array* create_array(const std::vector<app::ProfilingSettings_Setting__Array*>& items) {
            return il2cpp::array_new<app::ProfilingSettings_Setting__Array__Array>(get_class(), items);
        }
    } // namespace ProfilingSettings_Setting__Array
} // namespace app::classes::types
