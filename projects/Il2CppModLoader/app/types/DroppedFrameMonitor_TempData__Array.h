#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor_TempData__Array {
        namespace {
            app::DroppedFrameMonitor_TempData__Array__Class* type_info_ref = nullptr;
        }
        app::DroppedFrameMonitor_TempData__Array__Class** type_info = &type_info_ref;
        inline app::DroppedFrameMonitor_TempData__Array__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitor_TempData__Array__Class>(type_info, "", "DroppedFrameMonitor+TempData[]");
        }
        inline app::DroppedFrameMonitor_TempData__Array* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor_TempData__Array>(get_class());
        }
    } // namespace DroppedFrameMonitor_TempData__Array
} // namespace app::classes::types
