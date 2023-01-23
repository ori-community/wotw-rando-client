#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRScreenshots_TakeStereoScreenshot.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRScreenshotError__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__TakeStereoScreenshot {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRScreenshots_TakeStereoScreenshot * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE61E0, app::EVRScreenshotError__Enum, Invoke, (app::IVRScreenshots_TakeStereoScreenshot * this_ptr, uint32_t* p_out_screenshot_handle, app::String* pch_preview_filename, app::String* pch_v_r_filename))
    IL2CPP_REGISTER_METHOD(0x02CE6580, app::IAsyncResult*, BeginInvoke, (app::IVRScreenshots_TakeStereoScreenshot * this_ptr, uint32_t* p_out_screenshot_handle, app::String* pch_preview_filename, app::String* pch_v_r_filename, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRScreenshotError__Enum, EndInvoke, (app::IVRScreenshots_TakeStereoScreenshot * this_ptr, uint32_t* p_out_screenshot_handle, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__TakeStereoScreenshot
