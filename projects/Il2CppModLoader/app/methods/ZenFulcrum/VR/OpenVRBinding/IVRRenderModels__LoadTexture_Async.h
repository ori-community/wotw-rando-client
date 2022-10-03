#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadTexture_Async {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRRenderModels_LoadTexture_Async * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F51B50, app::EVRRenderModelError__Enum, Invoke, (app::IVRRenderModels_LoadTexture_Async * this_ptr, int32_t texture_id, app::void** pp_texture))
    IL2CPP_REGISTER_METHOD(0x02CE4C60, app::IAsyncResult*, BeginInvoke, (app::IVRRenderModels_LoadTexture_Async * this_ptr, int32_t texture_id, app::void** pp_texture, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRRenderModelError__Enum, EndInvoke, (app::IVRRenderModels_LoadTexture_Async * this_ptr, app::void** pp_texture, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRRenderModels__LoadTexture_Async
