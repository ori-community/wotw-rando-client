#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Collections::Generic::List_1_CameraSettings_ {
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_CameraSettings_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047215D0, List_1_CameraSettings__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_CameraSettings_ * this_ptr, app::CameraSettings* item))
    IL2CPP_REGISTER_METHODINFO(0x04752830, List_1_CameraSettings__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::CameraSettings*, get_Item, (app::List_1_CameraSettings_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x047131F8, List_1_CameraSettings__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_CameraSettings_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474FA80, List_1_CameraSettings___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_CameraSettings_
