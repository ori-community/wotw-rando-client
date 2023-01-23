#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CameraSettings_AnimateJobData.h>

namespace app::classes::CameraSettings_AnimateJobData {
    IL2CPP_REGISTER_METHOD(0x016A7800, void, CreateArrays, (app::CameraSettings_AnimateJobData * this_ptr, int32_t length, int32_t mult_length))
    IL2CPP_REGISTER_METHOD(0x016A79D0, void, Dispose, (app::CameraSettings_AnimateJobData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CameraSettings_AnimateJobData * this_ptr))
} // namespace app::classes::CameraSettings_AnimateJobData
