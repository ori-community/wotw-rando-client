#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerticalCameraSettingsZone_CameraPostMetaData.h>

namespace app::classes::VerticalCameraSettingsZone_CameraPostMetaData {
    IL2CPP_REGISTER_METHOD(0x008BAB70, void, UpdateCameraSettings, (app::VerticalCameraSettingsZone_CameraPostMetaData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008BAD00, void, ctor, (app::VerticalCameraSettingsZone_CameraPostMetaData * this_ptr))
} // namespace app::classes::VerticalCameraSettingsZone_CameraPostMetaData
