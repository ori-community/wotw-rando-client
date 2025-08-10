#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRRenderModels_GetRenderModelCount.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelCount {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRRenderModels_GetRenderModelCount* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(0x0167F180, uint32_t, Invoke, app::IVRRenderModels_GetRenderModelCount* this_ptr)
    IL2CPP_REGISTER_METHOD(
        0x00611B10,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRRenderModels_GetRenderModelCount* this_ptr,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x00F550D0, uint32_t, EndInvoke, app::IVRRenderModels_GetRenderModelCount* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__GetRenderModelCount
