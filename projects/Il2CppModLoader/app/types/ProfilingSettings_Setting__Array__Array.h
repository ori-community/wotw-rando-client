#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ProfilingSettings_Setting__Array__Array {
        namespace {
            app::ProfilingSettings_Setting__Array__Array__Class* type_info_ref = nullptr;
        }
        app::ProfilingSettings_Setting__Array__Array__Class** type_info = &type_info_ref;
        inline app::ProfilingSettings_Setting__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::ProfilingSettings_Setting__Array__Array__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings+Setting[][]");
        }
        inline app::ProfilingSettings_Setting__Array__Array* create() {
            return il2cpp::create_object<app::ProfilingSettings_Setting__Array__Array>(get_class());
        }
    } // namespace ProfilingSettings_Setting__Array__Array
} // namespace app::classes::types
