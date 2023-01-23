#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_CameraPostMetaData__Class.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_CameraPostMetaData.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_CameraPostMetaData__Array.h>

namespace app::classes::types {
    namespace VerticalCameraSettingsZone_CameraPostMetaData {
        namespace {
            inline app::VerticalCameraSettingsZone_CameraPostMetaData__Class* type_info_ref = nullptr;
        }
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Class** type_info = &type_info_ref;
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Class* get_class() {
            return il2cpp::get_nested_class<app::VerticalCameraSettingsZone_CameraPostMetaData__Class>(type_info, "", "VerticalCameraSettingsZone", "CameraPostMetaData");
        }
        inline app::VerticalCameraSettingsZone_CameraPostMetaData* create() {
            return il2cpp::create_object<app::VerticalCameraSettingsZone_CameraPostMetaData>(get_class());
        }
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array* create_array(int size) {
            return il2cpp::array_new<app::VerticalCameraSettingsZone_CameraPostMetaData__Array>(get_class(), size);
        }
        inline app::VerticalCameraSettingsZone_CameraPostMetaData__Array* create_array(const std::vector<app::VerticalCameraSettingsZone_CameraPostMetaData*>& items) {
            return il2cpp::array_new<app::VerticalCameraSettingsZone_CameraPostMetaData__Array>(get_class(), items);
        }
    } // namespace VerticalCameraSettingsZone_CameraPostMetaData
} // namespace app::classes::types
