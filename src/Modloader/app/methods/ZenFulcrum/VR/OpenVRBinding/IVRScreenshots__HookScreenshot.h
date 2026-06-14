#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRScreenshotError__Enum.h>
#include <Modloader/app/structs/EVRScreenshotType__Enum__Array.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRScreenshots_HookScreenshot.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__HookScreenshot {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRScreenshots_HookScreenshot* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x00F54C90,
        app::EVRScreenshotError__Enum,
        Invoke,
        app::IVRScreenshots_HookScreenshot* this_ptr,
        app::EVRScreenshotType__Enum__Array* p_supported_types,
        int32_t num_types
    )
    IL2CPP_REGISTER_METHOD(
        0x02CE5B00,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRScreenshots_HookScreenshot* this_ptr,
        app::EVRScreenshotType__Enum__Array* p_supported_types,
        int32_t num_types,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRScreenshotError__Enum, EndInvoke, app::IVRScreenshots_HookScreenshot* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__HookScreenshot
