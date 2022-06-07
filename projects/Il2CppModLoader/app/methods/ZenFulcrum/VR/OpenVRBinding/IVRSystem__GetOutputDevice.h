#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRSystem__GetOutputDevice {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRSystem_GetOutputDevice * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CED080, void, Invoke, (app::IVRSystem_GetOutputDevice * this_ptr, uint64_t * pn_device, app::ETextureType__Enum texture_type, void * p_instance))
    IL2CPP_REGISTER_METHOD(0x02CED400, app::IAsyncResult *, BeginInvoke, (app::IVRSystem_GetOutputDevice * this_ptr, uint64_t * pn_device, app::ETextureType__Enum texture_type, void * p_instance, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x006FD370, void, EndInvoke, (app::IVRSystem_GetOutputDevice * this_ptr, uint64_t * pn_device, app::IAsyncResult * result))
}
