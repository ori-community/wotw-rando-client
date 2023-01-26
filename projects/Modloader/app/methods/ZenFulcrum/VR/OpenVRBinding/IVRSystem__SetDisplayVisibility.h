#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IVRSystem_SetDisplayVisibility.h>
#include <Modloader/app/structs/AsyncCallback.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__SetDisplayVisibility {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_SetDisplayVisibility * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02A50670, bool, Invoke, (app::IVRSystem_SetDisplayVisibility * this_ptr, bool b_is_visible_on_desktop))
    IL2CPP_REGISTER_METHOD(0x02CEFC20, app::IAsyncResult*, BeginInvoke, (app::IVRSystem_SetDisplayVisibility * this_ptr, bool b_is_visible_on_desktop, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x008A1BF0, bool, EndInvoke, (app::IVRSystem_SetDisplayVisibility * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRSystem__SetDisplayVisibility
