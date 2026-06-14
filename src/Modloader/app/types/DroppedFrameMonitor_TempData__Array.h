#pragma once
#include <Modloader/app/structs/DroppedFrameMonitor_TempData__Array.h>
#include <Modloader/app/structs/DroppedFrameMonitor_TempData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DroppedFrameMonitor_TempData__Array {
        inline app::DroppedFrameMonitor_TempData__Array__Class** type_info() {
            static app::DroppedFrameMonitor_TempData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DroppedFrameMonitor_TempData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DroppedFrameMonitor_TempData__Array__Class* get_class() {
            return il2cpp::get_class<app::DroppedFrameMonitor_TempData__Array__Class>(type_info(), "", "DroppedFrameMonitor+TempData[]");
        }
        inline app::DroppedFrameMonitor_TempData__Array* create() {
            return il2cpp::create_object<app::DroppedFrameMonitor_TempData__Array>(get_class());
        }
    } // namespace DroppedFrameMonitor_TempData__Array
} // namespace app::classes::types
