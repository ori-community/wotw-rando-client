#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__GetApplicationsTransitionStateNameFromEnum {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_GetApplicationsTransitionStateNameFromEnum * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x00F52080, void *, Invoke, (app::IVRApplications_GetApplicationsTransitionStateNameFromEnum * this_ptr, app::EVRApplicationTransitionState__Enum state))
    IL2CPP_REGISTER_METHOD(0x02F3ECA0, app::IAsyncResult *, BeginInvoke, (app::IVRApplications_GetApplicationsTransitionStateNameFromEnum * this_ptr, app::EVRApplicationTransitionState__Enum state, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F52480, void *, EndInvoke, (app::IVRApplications_GetApplicationsTransitionStateNameFromEnum * this_ptr, app::IAsyncResult * result))
}
