#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GPUProfilingMode {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GPUProfilingMode__Class** type_info;
        inline app::GPUProfilingMode__Class* get_class() {
            return il2cpp::get_class<app::GPUProfilingMode__Class>(type_info, "Moon.Telemetry.Performance.profilers", "GPUProfilingMode");
        }
        inline app::GPUProfilingMode* create() {
            return il2cpp::create_object<app::GPUProfilingMode>(get_class());
        }
    } // namespace GPUProfilingMode
} // namespace app::classes::types
