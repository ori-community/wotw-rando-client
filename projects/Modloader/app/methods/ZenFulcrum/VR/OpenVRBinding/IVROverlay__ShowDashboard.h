#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/IVROverlay_ShowDashboard.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowDashboard {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_ShowDashboard * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::IVROverlay_ShowDashboard * this_ptr, app::String* pch_overlay_to_show))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult*, BeginInvoke, (app::IVROverlay_ShowDashboard * this_ptr, app::String* pch_overlay_to_show, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVROverlay_ShowDashboard * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowDashboard
