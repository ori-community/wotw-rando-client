#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/IVRRenderModels_RenderModelHasComponent.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__RenderModelHasComponent {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, app::IVRRenderModels_RenderModelHasComponent* this_ptr, app::Object* object, void* method_1)
    IL2CPP_REGISTER_METHOD(
        0x01D3D560,
        bool,
        Invoke,
        app::IVRRenderModels_RenderModelHasComponent* this_ptr,
        app::String* pch_render_model_name,
        app::String* pch_component_name
    )
    IL2CPP_REGISTER_METHOD(
        0x01435260,
        app::IAsyncResult*,
        BeginInvoke,
        app::IVRRenderModels_RenderModelHasComponent* this_ptr,
        app::String* pch_render_model_name,
        app::String* pch_component_name,
        app::AsyncCallback* callback,
        app::Object* object
    )
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, app::IVRRenderModels_RenderModelHasComponent* this_ptr, app::IAsyncResult* result)
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__RenderModelHasComponent
