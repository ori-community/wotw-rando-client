#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProfilingSettings_Setting__Array__Array__Class.h>
#include <Modloader/app/structs/ProfilingSettings_Setting__Array__Array.h>

namespace app::classes::types {
    namespace ProfilingSettings_Setting__Array__Array {
        namespace {
            inline app::ProfilingSettings_Setting__Array__Array__Class* type_info_ref = nullptr;
        }
        inline app::ProfilingSettings_Setting__Array__Array__Class** type_info = &type_info_ref;
        inline app::ProfilingSettings_Setting__Array__Array__Class* get_class() {
            return il2cpp::get_class<app::ProfilingSettings_Setting__Array__Array__Class>(type_info, "Moon.Telemetry.Performance", "ProfilingSettings+Setting[][]");
        }
        inline app::ProfilingSettings_Setting__Array__Array* create() {
            return il2cpp::create_object<app::ProfilingSettings_Setting__Array__Array>(get_class());
        }
    } // namespace ProfilingSettings_Setting__Array__Array
} // namespace app::classes::types
