#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/CameraMotionBlur.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::CameraMotionBlur {
    IL2CPP_REGISTER_METHOD(0x025171C0, void, CalculateViewProjection, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025173F0, void, Start, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02517590, void, OnEnable, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02517700, void, OnDisable, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025178C0, bool, CheckResources, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02517950, void, OnRenderImage, app::CameraMotionBlur* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x02519B80, void, Remember, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02519DC0, app::Camera*, GetTmpCam, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0251A7C0, void, StartFrame, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0251AA50, int32_t, divRoundUp, int32_t x, int32_t d)
    IL2CPP_REGISTER_METHOD(0x0251AA60, void, ctor, app::CameraMotionBlur* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0251ABD0, void, cctor, )
} // namespace app::classes::UnityStandardAssets::ImageEffects::CameraMotionBlur
