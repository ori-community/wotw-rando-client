#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRRenderModels_LoadTextureD3D11_Async.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRRenderModelError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/void.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadTextureD3D11_Async {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_LoadTextureD3D11_Async * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C7A6D0, app::EVRRenderModelError__Enum, Invoke, (app::IVRRenderModels_LoadTextureD3D11_Async * this_ptr, int32_t texture_id, void* p_d3_d11_device, void** pp_d3_d11_texture2_d))
    IL2CPP_REGISTER_METHOD(0x02CE4B70, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_LoadTextureD3D11_Async * this_ptr, int32_t texture_id, void* p_d3_d11_device, void** pp_d3_d11_texture2_d, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRRenderModelError__Enum, EndInvoke, (app::IVRRenderModels_LoadTextureD3D11_Async * this_ptr, void** pp_d3_d11_texture2_d, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadTextureD3D11_Async
