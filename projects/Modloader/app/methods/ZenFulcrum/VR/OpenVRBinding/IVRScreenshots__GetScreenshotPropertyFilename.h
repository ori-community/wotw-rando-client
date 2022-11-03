#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__GetScreenshotPropertyFilename {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRScreenshots_GetScreenshotPropertyFilename * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE5480, uint32_t, Invoke, (app::IVRScreenshots_GetScreenshotPropertyFilename * this_ptr, uint32_t screenshot_handle, app::EVRScreenshotPropertyFilenames__Enum filename_type, app::StringBuilder* pch_filename, uint32_t cch_filename, app::EVRScreenshotError__Enum* p_error))
    IL2CPP_REGISTER_METHOD(0x02CE5900, app::IAsyncResult*, BeginInvoke, (app::IVRScreenshots_GetScreenshotPropertyFilename * this_ptr, uint32_t screenshot_handle, app::EVRScreenshotPropertyFilenames__Enum filename_type, app::StringBuilder* pch_filename, uint32_t cch_filename, app::EVRScreenshotError__Enum* p_error, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, uint32_t, EndInvoke, (app::IVRScreenshots_GetScreenshotPropertyFilename * this_ptr, app::EVRScreenshotError__Enum* p_error, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__GetScreenshotPropertyFilename
