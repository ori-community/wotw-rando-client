#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XboxControllerManager_VibrationJob {
        inline app::XboxControllerManager_VibrationJob__Class** type_info = (app::XboxControllerManager_VibrationJob__Class**)(modloader::win::memory::resolve_rva(0x04783FF8));
        inline app::XboxControllerManager_VibrationJob__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxControllerManager_VibrationJob__Class>(type_info, "Core.Devices", "XboxControllerManager", "VibrationJob");
        }
        inline app::XboxControllerManager_VibrationJob* create() {
            return il2cpp::create_object<app::XboxControllerManager_VibrationJob>(get_class());
        }
        inline app::XboxControllerManager_VibrationJob__Boxed* box(app::XboxControllerManager_VibrationJob value) {
            return il2cpp::box_value<app::XboxControllerManager_VibrationJob__Boxed>(get_class(), value);
        }
    } // namespace XboxControllerManager_VibrationJob
} // namespace app::classes::types
