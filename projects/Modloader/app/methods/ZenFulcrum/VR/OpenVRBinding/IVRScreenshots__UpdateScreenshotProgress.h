#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRScreenshots_UpdateScreenshotProgress.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRScreenshotError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__UpdateScreenshotProgress {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRScreenshots_UpdateScreenshotProgress * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CE6660, app::EVRScreenshotError__Enum, Invoke, (app::IVRScreenshots_UpdateScreenshotProgress * this_ptr, uint32_t screenshot_handle, float fl_progress))
    IL2CPP_REGISTER_METHOD(0x02CE69D0, app::IAsyncResult*, BeginInvoke, (app::IVRScreenshots_UpdateScreenshotProgress * this_ptr, uint32_t screenshot_handle, float fl_progress, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRScreenshotError__Enum, EndInvoke, (app::IVRScreenshots_UpdateScreenshotProgress * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__UpdateScreenshotProgress
