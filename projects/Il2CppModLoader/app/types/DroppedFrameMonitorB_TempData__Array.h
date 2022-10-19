#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DroppedFrameMonitorB_TempData__Array {
        namespace {
            inline app::DroppedFrameMonitorB_TempData__Array__Class* type_info_ref = nullptr;
        }
        inline app::DroppedFrameMonitorB_TempData__Array__Class** type_info = &type_info_ref;
        inline app::DroppedFrameMonitorB_TempData__Array__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitorB_TempData__Array__Class>(type_info, "", "DroppedFrameMonitorB+TempData[]");
        }
        inline app::DroppedFrameMonitorB_TempData__Array* create() {
            return il2cpp::create_object<app::DroppedFrameMonitorB_TempData__Array>(get_class());
        }
    } // namespace DroppedFrameMonitorB_TempData__Array
} // namespace app::classes::types
