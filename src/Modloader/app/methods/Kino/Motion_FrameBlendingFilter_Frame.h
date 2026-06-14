#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Motion_FrameBlendingFilter_Frame__Boxed.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>

namespace app::classes::Kino::Motion_FrameBlendingFilter_Frame {
    IL2CPP_REGISTER_METHOD(0x0011FAA0, float, CalculateWeight, app::Motion_FrameBlendingFilter_Frame__Boxed* this_ptr, float strength, float current_time)
    IL2CPP_REGISTER_METHOD(0x0011FAB0, void, Release, app::Motion_FrameBlendingFilter_Frame__Boxed* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x0011FAC0,
        void,
        MakeRecord,
        app::Motion_FrameBlendingFilter_Frame__Boxed* this_ptr,
        app::RenderTexture* source,
        app::Material* material
    )
    IL2CPP_REGISTER_METHOD(
        0x0011FAD0,
        void,
        MakeRecordRaw,
        app::Motion_FrameBlendingFilter_Frame__Boxed* this_ptr,
        app::RenderTexture* source,
        app::RenderTextureFormat__Enum format
    )
} // namespace app::classes::Kino::Motion_FrameBlendingFilter_Frame
