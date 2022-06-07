#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingPlayAreaSize {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_GetWorkingPlayAreaSize * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x019D6DD0, bool, Invoke, (app::IVRChaperoneSetup_GetWorkingPlayAreaSize * this_ptr, float * p_size_x, float * p_size_z))
    IL2CPP_REGISTER_METHOD(0x02F40610, app::IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_GetWorkingPlayAreaSize * this_ptr, float * p_size_x, float * p_size_z, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::IVRChaperoneSetup_GetWorkingPlayAreaSize * this_ptr, float * p_size_x, float * p_size_z, app::IAsyncResult * result))
}
