#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRCompositor_GetVulkanInstanceExtensionsRequired.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StringBuilder.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetVulkanInstanceExtensionsRequired {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetVulkanInstanceExtensionsRequired * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02D79D50, uint32_t, Invoke, (app::IVRCompositor_GetVulkanInstanceExtensionsRequired * this_ptr, app::StringBuilder* pch_value, uint32_t un_buffer_size))
    IL2CPP_REGISTER_METHOD(0x02F42AA0, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_GetVulkanInstanceExtensionsRequired * this_ptr, app::StringBuilder* pch_value, uint32_t un_buffer_size, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, (app::IVRCompositor_GetVulkanInstanceExtensionsRequired * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetVulkanInstanceExtensionsRequired
