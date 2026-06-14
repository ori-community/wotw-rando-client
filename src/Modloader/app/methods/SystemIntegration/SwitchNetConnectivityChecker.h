#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SwitchNetConnectivityChecker.h>

namespace app::classes::SystemIntegration::SwitchNetConnectivityChecker {
    IL2CPP_REGISTER_METHOD(0x0052B120, void, ctor, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B450, bool, get_RunningInBackground, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B470, void, set_RunningInBackground, app::SwitchNetConnectivityChecker* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x0052B480, bool, get_SimulatePerfectEnvironment, )
    IL2CPP_REGISTER_METHOD(0x0052B540, bool, get_CanSendNetCommunications, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B560, bool, IsResolvingIssues, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B580, bool, get_HasToken, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B590, bool, get_HasConnection, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B5A0, void, Update, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, StartConnectionTest, )
    IL2CPP_REGISTER_METHOD(0x0052B5B0, void, ResolveNoConnectionIssue, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResolveNoNsaIdIssues, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ResolveNoNsaIdSilently, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckContextDoneState, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, GetTokenAsync, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CheckNsaId, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, EnsureValidNsaIdInCache, app::SwitchNetConnectivityChecker* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0052B5E0, void, OnGUI, app::SwitchNetConnectivityChecker* this_ptr)
} // namespace app::classes::SystemIntegration::SwitchNetConnectivityChecker
