#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVROverlay__ShowDashboard {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVROverlay_ShowDashboard * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00673B90, void, Invoke, (app::IVROverlay_ShowDashboard * this_ptr, app::String * pch_overlay_to_show))
    IL2CPP_REGISTER_METHOD(0x00674080, app::IAsyncResult *, BeginInvoke, (app::IVROverlay_ShowDashboard * this_ptr, app::String * pch_overlay_to_show, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVROverlay_ShowDashboard * this_ptr, app::IAsyncResult * result))
}
