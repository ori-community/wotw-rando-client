#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ReleaseSharedGLTexture {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_ReleaseSharedGLTexture * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F42CF0, bool, Invoke, (app::IVRCompositor_ReleaseSharedGLTexture * this_ptr, uint32_t gl_texture_id, void* gl_shared_texture_handle))
    IL2CPP_REGISTER_METHOD(0x02F43060, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_ReleaseSharedGLTexture * this_ptr, uint32_t gl_texture_id, void* gl_shared_texture_handle, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRCompositor_ReleaseSharedGLTexture * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__ReleaseSharedGLTexture
