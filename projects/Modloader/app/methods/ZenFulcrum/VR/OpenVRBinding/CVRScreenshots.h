#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CVRScreenshots.h>
#include <Modloader/app/structs/EVRScreenshotError__Enum.h>
#include <Modloader/app/structs/EVRScreenshotPropertyFilenames__Enum.h>
#include <Modloader/app/structs/EVRScreenshotType__Enum.h>
#include <Modloader/app/structs/EVRScreenshotType__Enum__Array.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/StringBuilder.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRScreenshots {
    IL2CPP_REGISTER_METHOD(0x0167B4A0, void, ctor, app::CVRScreenshots* this_ptr, void* p_interface)
    IL2CPP_REGISTER_METHOD(
        0x0167B5D0,
        app::EVRScreenshotError__Enum,
        RequestScreenshot,
        app::CVRScreenshots* this_ptr,
        uint32_t* p_out_screenshot_handle,
        app::EVRScreenshotType__Enum type,
        app::String* pch_preview_filename,
        app::String* pch_v_r_filename
    )
    IL2CPP_REGISTER_METHOD(
        0x0167B600,
        app::EVRScreenshotError__Enum,
        HookScreenshot,
        app::CVRScreenshots* this_ptr,
        app::EVRScreenshotType__Enum__Array* p_supported_types
    )
    IL2CPP_REGISTER_METHOD(
        0x0167A550,
        app::EVRScreenshotType__Enum,
        GetScreenshotPropertyType,
        app::CVRScreenshots* this_ptr,
        uint32_t screenshot_handle,
        app::EVRScreenshotError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0167B630,
        uint32_t,
        GetScreenshotPropertyFilename,
        app::CVRScreenshots* this_ptr,
        uint32_t screenshot_handle,
        app::EVRScreenshotPropertyFilenames__Enum filename_type,
        app::StringBuilder* pch_filename,
        uint32_t cch_filename,
        app::EVRScreenshotError__Enum* p_error
    )
    IL2CPP_REGISTER_METHOD(
        0x0167B660,
        app::EVRScreenshotError__Enum,
        UpdateScreenshotProgress,
        app::CVRScreenshots* this_ptr,
        uint32_t screenshot_handle,
        float fl_progress
    )
    IL2CPP_REGISTER_METHOD(
        0x0167B680,
        app::EVRScreenshotError__Enum,
        TakeStereoScreenshot,
        app::CVRScreenshots* this_ptr,
        uint32_t* p_out_screenshot_handle,
        app::String* pch_preview_filename,
        app::String* pch_v_r_filename
    )
    IL2CPP_REGISTER_METHOD(
        0x0167B6B0,
        app::EVRScreenshotError__Enum,
        SubmitScreenshot,
        app::CVRScreenshots* this_ptr,
        uint32_t screenshot_handle,
        app::EVRScreenshotType__Enum type,
        app::String* pch_source_preview_filename,
        app::String* pch_source_v_r_filename
    )
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::CVRScreenshots
