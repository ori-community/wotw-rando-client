#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchInternalProcess {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::IVRApplications_LaunchInternalProcess * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x02F3EFE0, app::EVRApplicationError__Enum, Invoke, (app::IVRApplications_LaunchInternalProcess * this_ptr, app::String* pch_binary_path, app::String* pch_arguments, app::String* pch_working_directory))
    IL2CPP_REGISTER_METHOD(0x00DC7DB0, app::IAsyncResult*, BeginInvoke, (app::IVRApplications_LaunchInternalProcess * this_ptr, app::String* pch_binary_path, app::String* pch_arguments, app::String* pch_working_directory, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x00F550D0, app::EVRApplicationError__Enum, EndInvoke, (app::IVRApplications_LaunchInternalProcess * this_ptr, app::IAsyncResult* result))
} // namespace app::classes::ZenFulcrum::VR::OpenVRBinding::IVRApplications__LaunchInternalProcess
