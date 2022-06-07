#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__SubmitScreenshot {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRScreenshots_SubmitScreenshot * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F52B80, app::EVRScreenshotError__Enum, Invoke, (app::IVRScreenshots_SubmitScreenshot * this_ptr, uint32_t screenshot_handle, app::EVRScreenshotType__Enum type, app::String * pch_source_preview_filename, app::String * pch_source_v_r_filename))
    IL2CPP_REGISTER_METHOD(0x02CE60F0, app::IAsyncResult *, BeginInvoke, (app::IVRScreenshots_SubmitScreenshot * this_ptr, uint32_t screenshot_handle, app::EVRScreenshotType__Enum type, app::String * pch_source_preview_filename, app::String * pch_source_v_r_filename, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRScreenshotError__Enum, EndInvoke, (app::IVRScreenshots_SubmitScreenshot * this_ptr, app::IAsyncResult * result))
}
