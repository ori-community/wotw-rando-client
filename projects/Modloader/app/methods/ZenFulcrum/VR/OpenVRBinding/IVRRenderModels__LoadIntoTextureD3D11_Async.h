#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVRRenderModels_LoadIntoTextureD3D11_Async.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/EVRRenderModelError__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadIntoTextureD3D11_Async {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F51B50, app::EVRRenderModelError__Enum, Invoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, int32_t texture_id, void* p_dst_texture))
    IL2CPP_REGISTER_METHOD(0x02CE49C0, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, int32_t texture_id, void* p_dst_texture, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRRenderModelError__Enum, EndInvoke, (app::IVRRenderModels_LoadIntoTextureD3D11_Async * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadIntoTextureD3D11_Async
