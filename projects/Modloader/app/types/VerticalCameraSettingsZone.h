#pragma once
#include <Modloader/app/structs/VerticalCameraSettingsZone.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerticalCameraSettingsZone {
        inline app::VerticalCameraSettingsZone__Class** type_info() {
            static app::VerticalCameraSettingsZone__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerticalCameraSettingsZone__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerticalCameraSettingsZone__Class* get_class() {
            return il2cpp::get_class<app::VerticalCameraSettingsZone__Class>(type_info(), "", "VerticalCameraSettingsZone");
        }
        inline app::VerticalCameraSettingsZone* create() {
            return il2cpp::create_object<app::VerticalCameraSettingsZone>(get_class());
        }
    } // namespace VerticalCameraSettingsZone
} // namespace app::classes::types
