#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSMonitor_FrameTimingData__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FPSMonitor_FrameTimingData__Array__Class** type_info;
        inline app::FPSMonitor_FrameTimingData__Array__Class* get_class() {
            return il2cpp::get_class<app::FPSMonitor_FrameTimingData__Array__Class>(type_info, "", "FPSMonitor+FrameTimingData[]");
        }
        inline app::FPSMonitor_FrameTimingData__Array* create() {
            return il2cpp::create_object<app::FPSMonitor_FrameTimingData__Array>(get_class());
        }
    } // namespace FPSMonitor_FrameTimingData__Array
} // namespace app::classes::types
