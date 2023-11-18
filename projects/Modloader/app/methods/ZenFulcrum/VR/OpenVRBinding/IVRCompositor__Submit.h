#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRCompositor_Submit.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/EVRCompositorError__Enum.h>
#include <Modloader/app/structs/EVREye__Enum.h>
#include <Modloader/app/structs/EVRSubmitFlags__Enum.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Texture_t.h>
#include <Modloader/app/structs/VRTextureBounds_t.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__Submit {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRCompositor_Submit * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02CEA590, app::EVRCompositorError__Enum, Invoke, (app::IVRCompositor_Submit * this_ptr, app::EVREye__Enum e_eye, app::Texture_t* p_texture, app::VRTextureBounds_t* p_bounds, app::EVRSubmitFlags__Enum n_submit_flags))
    IL2CPP_REGISTER_METHOD(0x02F43380, app::IAsyncResult*, BeginInvoke, (app::IVRCompositor_Submit * this_ptr, app::EVREye__Enum e_eye, app::Texture_t* p_texture, app::VRTextureBounds_t* p_bounds, app::EVRSubmitFlags__Enum n_submit_flags, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F530B0, app::EVRCompositorError__Enum, EndInvoke, (app::IVRCompositor_Submit * this_ptr, app::Texture_t* p_texture, app::VRTextureBounds_t* p_bounds, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRCompositor__Submit
