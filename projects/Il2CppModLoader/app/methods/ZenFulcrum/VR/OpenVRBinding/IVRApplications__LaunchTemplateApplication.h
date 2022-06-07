#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchTemplateApplication {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_LaunchTemplateApplication * this_ptr, app::Object * object, void * method_1))
    IL2CPP_REGISTER_METHOD(0x02CE3470, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_LaunchTemplateApplication * this_ptr, app::String * pch_template_app_key, app::String * pch_new_app_key, app::AppOverrideKeys_t__Array * p_keys, uint32_t un_keys))
    IL2CPP_REGISTER_METHOD(0x02F3F540, app::IAsyncResult *, BeginInvoke, (app::IVRApplications_LaunchTemplateApplication * this_ptr, app::String * pch_template_app_key, app::String * pch_new_app_key, app::AppOverrideKeys_t__Array * p_keys, uint32_t un_keys, app::AsyncCallback * callback, app::Object * object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_LaunchTemplateApplication * this_ptr, app::IAsyncResult * result))
}
