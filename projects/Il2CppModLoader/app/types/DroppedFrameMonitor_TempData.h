#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor_TempData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DroppedFrameMonitor_TempData__Class** type_info;
        inline app::DroppedFrameMonitor_TempData__Class* get_class() {
            return il2cpp::get_nested_class<app::DroppedFrameMonitor_TempData__Class>(type_info, "", "DroppedFrameMonitor", "TempData");
        }
        inline app::DroppedFrameMonitor_TempData* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor_TempData>(get_class());
        }
        inline app::DroppedFrameMonitor_TempData__Array* create_array(int size) {
            return il2cpp::array_new<app::DroppedFrameMonitor_TempData__Array>(get_class(), size);
        }
        inline app::DroppedFrameMonitor_TempData__Array* create_array(const std::vector<app::DroppedFrameMonitor_TempData*>& items) {
            return il2cpp::array_new<app::DroppedFrameMonitor_TempData__Array>(get_class(), items);
        }
    } // namespace DroppedFrameMonitor_TempData
} // namespace app::classes::types
