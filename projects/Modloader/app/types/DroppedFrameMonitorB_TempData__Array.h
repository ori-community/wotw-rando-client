#pragma once
#include <Modloader/app/structs/DroppedFrameMonitorB_TempData__Array.h>
#include <Modloader/app/structs/DroppedFrameMonitorB_TempData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitorB_TempData__Array {
        inline app::DroppedFrameMonitorB_TempData__Array__Class** type_info() {
            static app::DroppedFrameMonitorB_TempData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DroppedFrameMonitorB_TempData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DroppedFrameMonitorB_TempData__Array__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitorB_TempData__Array__Class>(type_info(), "", "DroppedFrameMonitorB+TempData[]");
        }
        inline app::DroppedFrameMonitorB_TempData__Array* create() {
            return il2cpp::create_object<app::DroppedFrameMonitorB_TempData__Array>(get_class());
        }
    } // namespace DroppedFrameMonitorB_TempData__Array
} // namespace app::classes::types
