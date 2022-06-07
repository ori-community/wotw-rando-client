#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingPlayAreaSize {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRChaperoneSetup_SetWorkingPlayAreaSize * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02C13FD0, void, Invoke, (app::IVRChaperoneSetup_SetWorkingPlayAreaSize * this_ptr, float size_x, float size_z))
    IL2CPP_REGISTER_METHOD(0x02F40CA0, app::IAsyncResult *, BeginInvoke, (app::IVRChaperoneSetup_SetWorkingPlayAreaSize * this_ptr, float size_x, float size_z, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00611B40, void, EndInvoke, (app::IVRChaperoneSetup_SetWorkingPlayAreaSize * this_ptr, app::IAsyncResult * result))
}
