#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitorB_TempData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::DroppedFrameMonitorB_TempData__Class** type_info;
        inline app::DroppedFrameMonitorB_TempData__Class* get_class() {
            return il2cpp::get_nested_class<app::DroppedFrameMonitorB_TempData__Class>(type_info, "", "DroppedFrameMonitorB", "TempData");
        }
        inline app::DroppedFrameMonitorB_TempData* create() {
            return il2cpp::create_object<app::DroppedFrameMonitorB_TempData>(get_class());
        }
        inline app::DroppedFrameMonitorB_TempData__Array* create_array(int size) {
            return il2cpp::array_new<app::DroppedFrameMonitorB_TempData__Array>(get_class(), size);
        }
    } // namespace DroppedFrameMonitorB_TempData
} // namespace app::classes::types
