#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__UnlockGLSharedTextureForAccess {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_UnlockGLSharedTextureForAccess * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x006FCF70, void, Invoke, (app::IVRCompositor_UnlockGLSharedTextureForAccess * this_ptr, void* gl_shared_texture_handle))
    IL2CPP_REGISTER_METHOD(0x02D77BB0, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_UnlockGLSharedTextureForAccess * this_ptr, void* gl_shared_texture_handle, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRCompositor_UnlockGLSharedTextureForAccess * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__UnlockGLSharedTextureForAccess
