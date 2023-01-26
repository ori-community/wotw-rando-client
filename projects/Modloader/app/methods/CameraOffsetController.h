#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/CameraOffsetController.h>
#include <Modloader/app/structs/CameraOffsetController_OffsetLayer.h>
#include <Modloader/app/structs/CameraOffsetZone.h>

namespace app::classes::CameraOffsetController {
    IL2CPP_REGISTER_METHOD(0x01696F20, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x01697000, app::Vector3, GetExtraZoomAmount, (app::CameraOffsetController * this_ptr, float offset))
    IL2CPP_REGISTER_METHOD(0x0064D960, float, get_ExtraZoomApplied, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0064D970, void, set_ExtraZoomApplied, (app::CameraOffsetController * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x01697150, app::Vector3, get_Offset, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01697230, void, set_Offset, (app::CameraOffsetController * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01697300, app::Vector3, get_Rotation, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01697460, void, set_Rotation, (app::CameraOffsetController * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x01697550, app::Vector3, get_DefaultCameraZoom, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01697700, void, AddOffsetLayer, (app::CameraOffsetController * this_ptr, app::CameraOffsetController_OffsetLayer* layer))
    IL2CPP_REGISTER_METHOD(0x016977E0, void, RemoveOffsetLayer, (app::CameraOffsetController * this_ptr, app::CameraOffsetController_OffsetLayer* layer))
    IL2CPP_REGISTER_METHOD(0x016978A0, void, Register, (app::CameraOffsetZone * offset_zone))
    IL2CPP_REGISTER_METHOD(0x01697AA0, void, Unregister, (app::CameraOffsetZone * offset_zome))
    IL2CPP_REGISTER_METHOD(0x01697B60, void, Awake, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01697F30, void, OnDestroy, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01698300, void, Reset, (app::CameraOffsetController * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x01698830, void, OnAspectChanged, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01698850, void, OnGameReset, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01698900, void, OnScrollLockPassed, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00933260, app::Vector3, get_LastOffsetWithoutCamera, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0E6F0, app::Vector3, get_LastRotationWithoutCamera, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x016989B0, void, GetCurrentOffsetTarget, (app::CameraOffsetController * this_ptr, float time_delta, bool instant, int32_t max_priority, app::Vector3* offset, app::Vector3* rotation))
    IL2CPP_REGISTER_METHOD(0x0169A0F0, void, UpdateOffset, (app::CameraOffsetController * this_ptr, bool instant, float time_delta))
    IL2CPP_REGISTER_METHOD(0x0169A470, void, UpdateMultiplier, (app::CameraOffsetController * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x0169A690, void, ctor, (app::CameraOffsetController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0169AB50, void, cctor, ())
} // namespace app::classes::CameraOffsetController
