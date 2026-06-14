#pragma once
#include <Modloader/app/structs/VerticalCameraSettingsZone_CameraPostMetaData__Array.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_CameraPostMetaData__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerticalCameraSettingsZone_CameraPostMetaData__Array {
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class** type_info() {
            static app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class>(type_info(), "", "VerticalCameraSettingsZone+CameraPostMetaData[]");
        }
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array* create() {
            return il2cpp::create_object<app::VerticalCameraSettingsZone_CameraPostMetaData__Array>(get_class());
        }
    } // namespace VerticalCameraSettingsZone_CameraPostMetaData__Array
} // namespace app::classes::types
