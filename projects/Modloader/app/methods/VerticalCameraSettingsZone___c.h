#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/VerticalCameraSettingsZone_CameraPostMetaData.h>
#include <Modloader/app/structs/VerticalCameraSettingsZone_c.h>

namespace app::classes::VerticalCameraSettingsZone___c {
    IL2CPP_REGISTER_METHOD(0x008BA9A0, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::VerticalCameraSettingsZone_c* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x008BAAE0,
        int32_t,
        _SortItems_b__24_0,
        app::VerticalCameraSettingsZone_c* this_ptr,
        app::VerticalCameraSettingsZone_CameraPostMetaData* a,
        app::VerticalCameraSettingsZone_CameraPostMetaData* b
    )
} // namespace app::classes::VerticalCameraSettingsZone___c
