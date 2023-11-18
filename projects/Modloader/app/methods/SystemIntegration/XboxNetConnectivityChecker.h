#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/XboxNetConnectivityChecker.h>

namespace app::classes::SystemIntegration::XboxNetConnectivityChecker {
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_RunningInBackground, (app::XboxNetConnectivityChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052C650, void, set_RunningInBackground, (app::XboxNetConnectivityChecker * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_CanSendNetCommunications, (app::XboxNetConnectivityChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResolveNoConnectionIssue, (app::XboxNetConnectivityChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, IsResolvingIssues, (app::XboxNetConnectivityChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, get_HasToken, (app::XboxNetConnectivityChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417870, bool, get_HasConnection, (app::XboxNetConnectivityChecker * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B80D80, void, ctor, (app::XboxNetConnectivityChecker * this_ptr))
} // namespace app::classes::SystemIntegration::XboxNetConnectivityChecker
