#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FPSMonitor_FrameTimingData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FPSMonitor_FrameTimingData__Class** type_info;
        inline app::FPSMonitor_FrameTimingData__Class* get_class() {
            return il2cpp::get_nested_class<app::FPSMonitor_FrameTimingData__Class>(type_info, "", "FPSMonitor", "FrameTimingData");
        }
        inline app::FPSMonitor_FrameTimingData* create() {
            return il2cpp::create_object<app::FPSMonitor_FrameTimingData>(get_class());
        }
        inline app::FPSMonitor_FrameTimingData__Array* create_array(int size) {
            return il2cpp::array_new<app::FPSMonitor_FrameTimingData__Array>(get_class(), size);
        }
    } // namespace FPSMonitor_FrameTimingData
} // namespace app::classes::types
