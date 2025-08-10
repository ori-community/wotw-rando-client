#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CVRRenderModels.h>
#include <Modloader/app/structs/EVRRenderModelError__Enum.h>
#include <Modloader/app/structs/RenderModel_ComponentState_t.h>
#include <Modloader/app/structs/RenderModel_ControllerMode_State_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/VRControllerState_t.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels {
    IL2CPP_REGISTER_METHOD(0x0167A3B0, void, ctor, app::CVRRenderModels* this_ptr, void* p_interface)
    IL2CPP_REGISTER_METHOD(
        0x0167A510,
        app::EVRRenderModelError__Enum,
        LoadRenderModel_Async,
        app::CVRRenderModels* this_ptr,
        app::String* pch_render_model_name,
        void** pp_render_model
    )
    IL2CPP_REGISTER_METHOD(0x0167A530, void, FreeRenderModel, app::CVRRenderModels* this_ptr, void* p_render_model)
    IL2CPP_REGISTER_METHOD(0x0167A550, app::EVRRenderModelError__Enum, LoadTexture_Async, app::CVRRenderModels* this_ptr, int32_t texture_id, void** pp_texture)
    IL2CPP_REGISTER_METHOD(0x0167A570, void, FreeTexture, app::CVRRenderModels* this_ptr, void* p_texture)
    IL2CPP_REGISTER_METHOD(
        0x01677EA0,
        app::EVRRenderModelError__Enum,
        LoadTextureD3D11_Async,
        app::CVRRenderModels* this_ptr,
        int32_t texture_id,
        void* p_d3_d11_device,
        void** pp_d3_d11_texture2_d
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A590,
        app::EVRRenderModelError__Enum,
        LoadIntoTextureD3D11_Async,
        app::CVRRenderModels* this_ptr,
        int32_t texture_id,
        void* p_dst_texture
    )
    IL2CPP_REGISTER_METHOD(0x0167A5B0, void, FreeTextureD3D11, app::CVRRenderModels* this_ptr, void* p_d3_d11_texture2_d)
    IL2CPP_REGISTER_METHOD(
        0x0167A5D0,
        uint32_t,
        GetRenderModelName,
        app::CVRRenderModels* this_ptr,
        uint32_t un_render_model_index,
        app::StringBuilder* pch_render_model_name,
        uint32_t un_render_model_name_len
    )
    IL2CPP_REGISTER_METHOD(0x0167A600, uint32_t, GetRenderModelCount, app::CVRRenderModels* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01676D30, uint32_t, GetComponentCount, app::CVRRenderModels* this_ptr, app::String* pch_render_model_name)
    IL2CPP_REGISTER_METHOD(
        0x0167A620,
        uint32_t,
        GetComponentName,
        app::CVRRenderModels* this_ptr,
        app::String* pch_render_model_name,
        uint32_t un_component_index,
        app::StringBuilder* pch_component_name,
        uint32_t un_component_name_len
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A650,
        uint64_t,
        GetComponentButtonMask,
        app::CVRRenderModels* this_ptr,
        app::String* pch_render_model_name,
        app::String* pch_component_name
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A670,
        uint32_t,
        GetComponentRenderModelName,
        app::CVRRenderModels* this_ptr,
        app::String* pch_render_model_name,
        app::String* pch_component_name,
        app::StringBuilder* pch_component_render_model_name,
        uint32_t un_component_render_model_name_len
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A6A0,
        bool,
        GetComponentState,
        app::CVRRenderModels* this_ptr,
        app::String* pch_render_model_name,
        app::String* pch_component_name,
        app::VRControllerState_t* p_controller_state,
        app::RenderModel_ControllerMode_State_t* p_state,
        app::RenderModel_ComponentState_t* p_component_state
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A880,
        bool,
        RenderModelHasComponent,
        app::CVRRenderModels* this_ptr,
        app::String* pch_render_model_name,
        app::String* pch_component_name
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A8B0,
        uint32_t,
        GetRenderModelThumbnailURL,
        app::CVRRenderModels* this_ptr,
        app::String* pch_render_model_name,
        app::StringBuilder* pch_thumbnail_u_r_l,
        uint32_t un_thumbnail_u_r_l_len,
        app::EVRRenderModelError__Enum* pe_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A8E0,
        uint32_t,
        GetRenderModelOriginalPath,
        app::CVRRenderModels* this_ptr,
        app::String* pch_render_model_name,
        app::StringBuilder* pch_original_path,
        uint32_t un_original_path_len,
        app::EVRRenderModelError__Enum* pe_error
    )
    IL2CPP_REGISTER_METHOD(0x0167A910, app::String*, GetRenderModelErrorNameFromEnum, app::CVRRenderModels* this_ptr, app::EVRRenderModelError__Enum error)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRRenderModels
