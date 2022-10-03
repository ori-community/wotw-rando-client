#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetMirrorTextureGL {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_GetMirrorTextureGL * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x01C7A6D0, app::EVRCompositorError__Enum, Invoke, (app::IVRCompositor_GetMirrorTextureGL * this_ptr, app::EVREye__Enum e_eye, uint32_t* pgl_texture_id, void* pgl_shared_texture_handle))
    IL2CPP_REGISTER_METHOD(0x02F42540, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_GetMirrorTextureGL * this_ptr, app::EVREye__Enum e_eye, uint32_t* pgl_texture_id, void* pgl_shared_texture_handle, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F51FA0, app::EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_GetMirrorTextureGL * this_ptr, uint32_t* pgl_texture_id, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__GetMirrorTextureGL
