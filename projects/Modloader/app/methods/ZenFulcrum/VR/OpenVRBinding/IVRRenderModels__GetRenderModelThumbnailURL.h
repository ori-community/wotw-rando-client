#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRRenderModelError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelThumbnailURL.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelThumbnailURL {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRRenderModels_GetRenderModelThumbnailURL* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x02CE41C0,
        uint32_t,
        Invoke,
        app::IVRRenderModels_GetRenderModelThumbnailURL* this_ptr,
        app::String* pch_render_model_name,
        app::StringBuilder* pch_thumbnail_u_r_l,
        uint32_t un_thumbnail_u_r_l_len,
        app::EVRRenderModelError__Enum* pe_error
    )
    IL2CPP_REGISTER_METHOD(
        0x02CE48D0,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRRenderModels_GetRenderModelThumbnailURL* this_ptr,
        app::String* pch_render_model_name,
        app::StringBuilder* pch_thumbnail_u_r_l,
        uint32_t un_thumbnail_u_r_l_len,
        app::EVRRenderModelError__Enum* pe_error,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(
        0x00F51FA0,
        uint32_t,
        EndInvoke,
        app::IVRRenderModels_GetRenderModelThumbnailURL* this_ptr,
        app::EVRRenderModelError__Enum* pe_error,
        app::IAsyncResult* result
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelThumbnailURL
