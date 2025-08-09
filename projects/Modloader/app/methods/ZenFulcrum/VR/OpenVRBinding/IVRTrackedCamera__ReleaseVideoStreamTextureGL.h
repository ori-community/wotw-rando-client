#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRTrackedCameraError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRTrackedCamera_ReleaseVideoStreamTextureGL.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__ReleaseVideoStreamTextureGL {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRTrackedCamera_ReleaseVideoStreamTextureGL* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x00F54C90,
        app::EVRTrackedCameraError__Enum,
        Invoke,
        app::IVRTrackedCamera_ReleaseVideoStreamTextureGL* this_ptr,
        uint64_t h_tracked_camera,
        uint32_t gl_texture_id
    )
    IL2CPP_REGISTER_METHOD(
        0x00F55000,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRTrackedCamera_ReleaseVideoStreamTextureGL* this_ptr,
        uint64_t h_tracked_camera,
        uint32_t gl_texture_id,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F550D0,
        app::EVRTrackedCameraError__Enum,
        EndInvoke,
        app::IVRTrackedCamera_ReleaseVideoStreamTextureGL* this_ptr,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRTrackedCamera__ReleaseVideoStreamTextureGL
