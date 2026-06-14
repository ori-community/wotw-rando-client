#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CVROverlay.h>
#include <Modloader/app/structs/EColorSpace__Enum.h>
#include <Modloader/app/structs/EOverlayDirection__Enum.h>
#include <Modloader/app/structs/ETextureType__Enum.h>
#include <Modloader/app/structs/ETrackingUniverseOrigin__Enum.h>
#include <Modloader/app/structs/EVROverlayError__Enum.h>
#include <Modloader/app/structs/HmdColor_t.h>
#include <Modloader/app/structs/HmdMatrix34_t.h>
#include <Modloader/app/structs/HmdRect2_t.h>
#include <Modloader/app/structs/HmdVector2_t.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/Texture_t.h>
#include <Modloader/app/structs/VREvent_t.h>
#include <Modloader/app/structs/VRMessageOverlayResponse__Enum.h>
#include <Modloader/app/structs/VROverlayFlags__Enum.h>
#include <Modloader/app/structs/VROverlayInputMethod__Enum.h>
#include <Modloader/app/structs/VROverlayIntersectionMaskPrimitive_t.h>
#include <Modloader/app/structs/VROverlayIntersectionParams_t.h>
#include <Modloader/app/structs/VROverlayIntersectionResults_t.h>
#include <Modloader/app/structs/VROverlayTransformType__Enum.h>
#include <Modloader/app/structs/VRTextureBounds_t.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVROverlay {
    IL2CPP_REGISTER_METHOD(0x01678A40, void, ctor, app::CVROverlay* this_ptr, void* p_interface)
    IL2CPP_REGISTER_METHOD(
        0x01678BC0,
        app::EVROverlayError__Enum,
        FindOverlay,
        app::CVROverlay* this_ptr,
        app::String* pch_overlay_key,
        uint64_t* p_overlay_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x01678BF0,
        app::EVROverlayError__Enum,
        CreateOverlay,
        app::CVROverlay* this_ptr,
        app::String* pch_overlay_key,
        app::String* pch_overlay_name,
        uint64_t* p_overlay_handle
    )
    IL2CPP_REGISTER_METHOD(0x01678C20, app::EVROverlayError__Enum, DestroyOverlay, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(0x01678C40, app::EVROverlayError__Enum, SetHighQualityOverlay, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(0x01678C60, uint64_t, GetHighQualityOverlay, app::CVROverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01678C80,
        uint32_t,
        GetOverlayKey,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::StringBuilder* pch_value,
        uint32_t un_buffer_size,
        app::EVROverlayError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x01678CB0,
        uint32_t,
        GetOverlayName,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::StringBuilder* pch_value,
        uint32_t un_buffer_size,
        app::EVROverlayError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(0x01678CE0, app::EVROverlayError__Enum, SetOverlayName, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle, app::String* pch_name)
    IL2CPP_REGISTER_METHOD(
        0x01678D00,
        app::EVROverlayError__Enum,
        GetOverlayImageData,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        void* pv_buffer,
        uint32_t un_buffer_size,
        uint32_t* pun_width,
        uint32_t* pun_height
    )
    IL2CPP_REGISTER_METHOD(0x01678D40, app::String*, GetOverlayErrorNameFromEnum, app::CVROverlay* this_ptr, app::EVROverlayError__Enum error)
    IL2CPP_REGISTER_METHOD(
        0x01678E20,
        app::EVROverlayError__Enum,
        SetOverlayRenderingPid,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t un_p_i_d
    )
    IL2CPP_REGISTER_METHOD(0x01678E40, uint32_t, GetOverlayRenderingPid, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(
        0x01678E60,
        app::EVROverlayError__Enum,
        SetOverlayFlag,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayFlags__Enum e_overlay_flag,
        bool b_enabled
    )
    IL2CPP_REGISTER_METHOD(
        0x01678E90,
        app::EVROverlayError__Enum,
        GetOverlayFlag,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayFlags__Enum e_overlay_flag,
        bool* pb_enabled
    )
    IL2CPP_REGISTER_METHOD(
        0x01678EC0,
        app::EVROverlayError__Enum,
        SetOverlayColor,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        float f_red,
        float f_green,
        float f_blue
    )
    IL2CPP_REGISTER_METHOD(
        0x01678EF0,
        app::EVROverlayError__Enum,
        GetOverlayColor,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        float* pf_red,
        float* pf_green,
        float* pf_blue
    )
    IL2CPP_REGISTER_METHOD(0x01678F30, app::EVROverlayError__Enum, SetOverlayAlpha, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle, float f_alpha)
    IL2CPP_REGISTER_METHOD(0x01678F60, app::EVROverlayError__Enum, GetOverlayAlpha, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle, float* pf_alpha)
    IL2CPP_REGISTER_METHOD(
        0x01678F90,
        app::EVROverlayError__Enum,
        SetOverlayTexelAspect,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        float f_texel_aspect
    )
    IL2CPP_REGISTER_METHOD(
        0x01678FC0,
        app::EVROverlayError__Enum,
        GetOverlayTexelAspect,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        float* pf_texel_aspect
    )
    IL2CPP_REGISTER_METHOD(
        0x01678FF0,
        app::EVROverlayError__Enum,
        SetOverlaySortOrder,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t un_sort_order
    )
    IL2CPP_REGISTER_METHOD(
        0x01679020,
        app::EVROverlayError__Enum,
        GetOverlaySortOrder,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* pun_sort_order
    )
    IL2CPP_REGISTER_METHOD(
        0x01679050,
        app::EVROverlayError__Enum,
        SetOverlayWidthInMeters,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        float f_width_in_meters
    )
    IL2CPP_REGISTER_METHOD(
        0x01679080,
        app::EVROverlayError__Enum,
        GetOverlayWidthInMeters,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        float* pf_width_in_meters
    )
    IL2CPP_REGISTER_METHOD(
        0x016790B0,
        app::EVROverlayError__Enum,
        SetOverlayAutoCurveDistanceRangeInMeters,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        float f_min_distance_in_meters,
        float f_max_distance_in_meters
    )
    IL2CPP_REGISTER_METHOD(
        0x016790E0,
        app::EVROverlayError__Enum,
        GetOverlayAutoCurveDistanceRangeInMeters,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        float* pf_min_distance_in_meters,
        float* pf_max_distance_in_meters
    )
    IL2CPP_REGISTER_METHOD(
        0x01679110,
        app::EVROverlayError__Enum,
        SetOverlayTextureColorSpace,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::EColorSpace__Enum e_texture_color_space
    )
    IL2CPP_REGISTER_METHOD(
        0x01679140,
        app::EVROverlayError__Enum,
        GetOverlayTextureColorSpace,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::EColorSpace__Enum* pe_texture_color_space
    )
    IL2CPP_REGISTER_METHOD(
        0x01679170,
        app::EVROverlayError__Enum,
        SetOverlayTextureBounds,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VRTextureBounds_t* p_overlay_texture_bounds
    )
    IL2CPP_REGISTER_METHOD(
        0x016791A0,
        app::EVROverlayError__Enum,
        GetOverlayTextureBounds,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VRTextureBounds_t* p_overlay_texture_bounds
    )
    IL2CPP_REGISTER_METHOD(
        0x016791D0,
        uint32_t,
        GetOverlayRenderModel,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::String* pch_value,
        uint32_t un_buffer_size,
        app::HmdColor_t* p_color,
        app::EVROverlayError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x01679200,
        app::EVROverlayError__Enum,
        SetOverlayRenderModel,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::String* pch_render_model,
        app::HmdColor_t* p_color
    )
    IL2CPP_REGISTER_METHOD(
        0x01679230,
        app::EVROverlayError__Enum,
        GetOverlayTransformType,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayTransformType__Enum* pe_transform_type
    )
    IL2CPP_REGISTER_METHOD(
        0x01679260,
        app::EVROverlayError__Enum,
        SetOverlayTransformAbsolute,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::ETrackingUniverseOrigin__Enum e_tracking_origin,
        app::HmdMatrix34_t* pmat_tracking_origin_to_overlay_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x01679290,
        app::EVROverlayError__Enum,
        GetOverlayTransformAbsolute,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::ETrackingUniverseOrigin__Enum* pe_tracking_origin,
        app::HmdMatrix34_t* pmat_tracking_origin_to_overlay_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x016792C0,
        app::EVROverlayError__Enum,
        SetOverlayTransformTrackedDeviceRelative,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t un_tracked_device,
        app::HmdMatrix34_t* pmat_tracked_device_to_overlay_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x016792F0,
        app::EVROverlayError__Enum,
        GetOverlayTransformTrackedDeviceRelative,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* pun_tracked_device,
        app::HmdMatrix34_t* pmat_tracked_device_to_overlay_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x01679320,
        app::EVROverlayError__Enum,
        SetOverlayTransformTrackedDeviceComponent,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t un_device_index,
        app::String* pch_component_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01679350,
        app::EVROverlayError__Enum,
        GetOverlayTransformTrackedDeviceComponent,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* pun_device_index,
        app::String* pch_component_name,
        uint32_t un_component_name_size
    )
    IL2CPP_REGISTER_METHOD(
        0x01679380,
        app::EVROverlayError__Enum,
        GetOverlayTransformOverlayRelative,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint64_t* ul_overlay_handle_parent,
        app::HmdMatrix34_t* pmat_parent_overlay_to_overlay_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x016793B0,
        app::EVROverlayError__Enum,
        SetOverlayTransformOverlayRelative,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint64_t ul_overlay_handle_parent,
        app::HmdMatrix34_t* pmat_parent_overlay_to_overlay_transform
    )
    IL2CPP_REGISTER_METHOD(0x016793E0, app::EVROverlayError__Enum, ShowOverlay, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(0x01679410, app::EVROverlayError__Enum, HideOverlay, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(0x01679440, bool, IsOverlayVisible, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(
        0x01679470,
        app::EVROverlayError__Enum,
        GetTransformForOverlayCoordinates,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::ETrackingUniverseOrigin__Enum e_tracking_origin,
        app::HmdVector2_t coordinates_in_overlay,
        app::HmdMatrix34_t* pmat_transform
    )
    IL2CPP_REGISTER_METHOD(
        0x016794A0,
        bool,
        PollNextOverlayEvent,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VREvent_t* p_event,
        uint32_t uncb_v_r_event
    )
    IL2CPP_REGISTER_METHOD(
        0x01679750,
        app::EVROverlayError__Enum,
        GetOverlayInputMethod,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayInputMethod__Enum* pe_input_method
    )
    IL2CPP_REGISTER_METHOD(
        0x01679780,
        app::EVROverlayError__Enum,
        SetOverlayInputMethod,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayInputMethod__Enum e_input_method
    )
    IL2CPP_REGISTER_METHOD(
        0x016797B0,
        app::EVROverlayError__Enum,
        GetOverlayMouseScale,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::HmdVector2_t* pvec_mouse_scale
    )
    IL2CPP_REGISTER_METHOD(
        0x016797E0,
        app::EVROverlayError__Enum,
        SetOverlayMouseScale,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::HmdVector2_t* pvec_mouse_scale
    )
    IL2CPP_REGISTER_METHOD(
        0x01679810,
        bool,
        ComputeOverlayIntersection,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayIntersectionParams_t* p_params,
        app::VROverlayIntersectionResults_t* p_results
    )
    IL2CPP_REGISTER_METHOD(
        0x01679840,
        bool,
        HandleControllerOverlayInteractionAsMouse,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t un_controller_device_index
    )
    IL2CPP_REGISTER_METHOD(0x01679870, bool, IsHoverTargetOverlay, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(0x016798A0, uint64_t, GetGamepadFocusOverlay, app::CVROverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016798D0, app::EVROverlayError__Enum, SetGamepadFocusOverlay, app::CVROverlay* this_ptr, uint64_t ul_new_focus_overlay)
    IL2CPP_REGISTER_METHOD(
        0x01679900,
        app::EVROverlayError__Enum,
        SetOverlayNeighbor,
        app::CVROverlay* this_ptr,
        app::EOverlayDirection__Enum e_direction,
        uint64_t ul_from,
        uint64_t ul_to
    )
    IL2CPP_REGISTER_METHOD(
        0x01679930,
        app::EVROverlayError__Enum,
        MoveGamepadFocusToNeighbor,
        app::CVROverlay* this_ptr,
        app::EOverlayDirection__Enum e_direction,
        uint64_t ul_from
    )
    IL2CPP_REGISTER_METHOD(
        0x01679960,
        app::EVROverlayError__Enum,
        SetOverlayTexture,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::Texture_t* p_texture
    )
    IL2CPP_REGISTER_METHOD(0x01679990, app::EVROverlayError__Enum, ClearOverlayTexture, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(
        0x016799C0,
        app::EVROverlayError__Enum,
        SetOverlayRaw,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        void* pv_buffer,
        uint32_t un_width,
        uint32_t un_height,
        uint32_t un_depth
    )
    IL2CPP_REGISTER_METHOD(
        0x016799F0,
        app::EVROverlayError__Enum,
        SetOverlayFromFile,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::String* pch_file_path
    )
    IL2CPP_REGISTER_METHOD(
        0x01679A20,
        app::EVROverlayError__Enum,
        GetOverlayTexture,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        void** p_native_texture_handle,
        void* p_native_texture_ref,
        uint32_t* p_width,
        uint32_t* p_height,
        uint32_t* p_native_format,
        app::ETextureType__Enum* p_a_p_i_type,
        app::EColorSpace__Enum* p_color_space,
        app::VRTextureBounds_t* p_texture_bounds
    )
    IL2CPP_REGISTER_METHOD(
        0x01679A70,
        app::EVROverlayError__Enum,
        ReleaseNativeOverlayHandle,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        void* p_native_texture_handle
    )
    IL2CPP_REGISTER_METHOD(
        0x01679AA0,
        app::EVROverlayError__Enum,
        GetOverlayTextureSize,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* p_width,
        uint32_t* p_height
    )
    IL2CPP_REGISTER_METHOD(
        0x01679AD0,
        app::EVROverlayError__Enum,
        CreateDashboardOverlay,
        app::CVROverlay* this_ptr,
        app::String* pch_overlay_key,
        app::String* pch_overlay_friendly_name,
        uint64_t* p_main_handle,
        uint64_t* p_thumbnail_handle
    )
    IL2CPP_REGISTER_METHOD(0x01679B10, bool, IsDashboardVisible, app::CVROverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01679B40, bool, IsActiveDashboardOverlay, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle)
    IL2CPP_REGISTER_METHOD(
        0x01679B70,
        app::EVROverlayError__Enum,
        SetDashboardOverlaySceneProcess,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t un_process_id
    )
    IL2CPP_REGISTER_METHOD(
        0x01679BA0,
        app::EVROverlayError__Enum,
        GetDashboardOverlaySceneProcess,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        uint32_t* pun_process_id
    )
    IL2CPP_REGISTER_METHOD(0x01679BD0, void, ShowDashboard, app::CVROverlay* this_ptr, app::String* pch_overlay_to_show)
    IL2CPP_REGISTER_METHOD(0x01679C00, uint32_t, GetPrimaryDashboardDevice, app::CVROverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01679C30,
        app::EVROverlayError__Enum,
        ShowKeyboard,
        app::CVROverlay* this_ptr,
        int32_t e_input_mode,
        int32_t e_line_input_mode,
        app::String* pch_description,
        uint32_t un_char_max,
        app::String* pch_existing_text,
        bool b_use_minimal_mode,
        uint64_t u_user_value
    )
    IL2CPP_REGISTER_METHOD(
        0x01679C70,
        app::EVROverlayError__Enum,
        ShowKeyboardForOverlay,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        int32_t e_input_mode,
        int32_t e_line_input_mode,
        app::String* pch_description,
        uint32_t un_char_max,
        app::String* pch_existing_text,
        bool b_use_minimal_mode,
        uint64_t u_user_value
    )
    IL2CPP_REGISTER_METHOD(0x01679CB0, uint32_t, GetKeyboardText, app::CVROverlay* this_ptr, app::StringBuilder* pch_text, uint32_t cch_text)
    IL2CPP_REGISTER_METHOD(0x01679CE0, void, HideKeyboard, app::CVROverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x01679D10,
        void,
        SetKeyboardTransformAbsolute,
        app::CVROverlay* this_ptr,
        app::ETrackingUniverseOrigin__Enum e_tracking_origin,
        app::HmdMatrix34_t* pmat_tracking_origin_to_keyboard_transform
    )
    IL2CPP_REGISTER_METHOD(0x01679D40, void, SetKeyboardPositionForOverlay, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle, app::HmdRect2_t avoid_rect)
    IL2CPP_REGISTER_METHOD(
        0x01679D80,
        app::EVROverlayError__Enum,
        SetOverlayIntersectionMask,
        app::CVROverlay* this_ptr,
        uint64_t ul_overlay_handle,
        app::VROverlayIntersectionMaskPrimitive_t* p_mask_primitives,
        uint32_t un_num_mask_primitives,
        uint32_t un_primitive_size
    )
    IL2CPP_REGISTER_METHOD(0x01679DB0, app::EVROverlayError__Enum, GetOverlayFlags, app::CVROverlay* this_ptr, uint64_t ul_overlay_handle, uint32_t* p_flags)
    IL2CPP_REGISTER_METHOD(
        0x01679DE0,
        app::VRMessageOverlayResponse__Enum,
        ShowMessageOverlay,
        app::CVROverlay* this_ptr,
        app::String* pch_text,
        app::String* pch_caption,
        app::String* pch_button0_text,
        app::String* pch_button1_text,
        app::String* pch_button2_text,
        app::String* pch_button3_text
    )
    IL2CPP_REGISTER_METHOD(0x01679E10, void, CloseMessageOverlay, app::CVROverlay* this_ptr)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVROverlay
