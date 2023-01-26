#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRScreenshots_RequestScreenshot.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRScreenshotError__Enum.h>
#include <Modloader/app/structs/EVRScreenshotType__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__RequestScreenshot {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRScreenshots_RequestScreenshot * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE5BD0, app::EVRScreenshotError__Enum, Invoke, (app::IVRScreenshots_RequestScreenshot * this_ptr, uint32_t* p_out_screenshot_handle, app::EVRScreenshotType__Enum type, app::String* pch_preview_filename, app::String* pch_v_r_filename))
    IL2CPP_REGISTER_METHOD(0x02CE5FF0, app::IAsyncResult*, BeginInvoke, (app::IVRScreenshots_RequestScreenshot * this_ptr, uint32_t* p_out_screenshot_handle, app::EVRScreenshotType__Enum type, app::String* pch_preview_filename, app::String* pch_v_r_filename, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRScreenshotError__Enum, EndInvoke, (app::IVRScreenshots_RequestScreenshot * this_ptr, uint32_t* p_out_screenshot_handle, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__RequestScreenshot
