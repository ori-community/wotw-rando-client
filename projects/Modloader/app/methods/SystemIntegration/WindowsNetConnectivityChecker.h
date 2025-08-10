#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/WindowsNetConnectivityChecker.h>

namespace app::classes::SystemIntegration::WindowsNetConnectivityChecker {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_RunningInBackground, app::WindowsNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_RunningInBackground, app::WindowsNetConnectivityChecker* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x00CDB1E0, bool, get_CanSendNetCommunications, app::WindowsNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResolveNoConnectionIssue, app::WindowsNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsResolvingIssues, app::WindowsNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasToken, app::WindowsNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CDB1E0, bool, get_HasConnection, app::WindowsNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, ctor, app::WindowsNetConnectivityChecker* this_ptr)
} // namespace app::classes::SystemIntegration::WindowsNetConnectivityChecker
