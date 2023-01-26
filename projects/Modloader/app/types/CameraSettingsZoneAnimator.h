#pragma once
#include <Modloader/app/structs/CameraSettingsZoneAnimator.h>
#include <Modloader/app/structs/CameraSettingsZoneAnimator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CameraSettingsZoneAnimator {
        inline app::CameraSettingsZoneAnimator__Class** type_info() {
            static app::CameraSettingsZoneAnimator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CameraSettingsZoneAnimator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CameraSettingsZoneAnimator__Class* get_class() {
            return il2cpp::get_class<app::CameraSettingsZoneAnimator__Class>(type_info(), "", "CameraSettingsZoneAnimator");
        }
        inline app::CameraSettingsZoneAnimator* create() {
            return il2cpp::create_object<app::CameraSettingsZoneAnimator>(get_class());
        }
    } // namespace CameraSettingsZoneAnimator
} // namespace app::classes::types
