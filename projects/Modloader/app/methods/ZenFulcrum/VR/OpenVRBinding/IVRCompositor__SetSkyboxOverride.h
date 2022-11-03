#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetSkyboxOverride {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_SetSkyboxOverride * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00F54C90, app::EVRCompositorError__Enum, Invoke, (app::IVRCompositor_SetSkyboxOverride * this_ptr, app::Texture_t__Array* p_textures, uint32_t un_texture_count))
    IL2CPP_REGISTER_METHOD(0x02F431F0, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_SetSkyboxOverride * this_ptr, app::Texture_t__Array* p_textures, uint32_t un_texture_count, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_SetSkyboxOverride * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__SetSkyboxOverride
