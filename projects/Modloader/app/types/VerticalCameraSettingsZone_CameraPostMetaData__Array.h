#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerticalCameraSettingsZone_CameraPostMetaData__Array {
        namespace {
            inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class** type_info = &type_info_ref;
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class* get_class() {
            return il2cpp::get_class<app::VerticalCameraSettingsZone_CameraPostMetaData__Array__Class>(type_info, "", "VerticalCameraSettingsZone+CameraPostMetaData[]");
        }
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array* create() {
            return il2cpp::create_object<app::VerticalCameraSettingsZone_CameraPostMetaData__Array>(get_class());
        }
    } // namespace VerticalCameraSettingsZone_CameraPostMetaData__Array
} // namespace app::classes::types
